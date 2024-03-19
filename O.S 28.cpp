#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(int argc, char *argv[]) {
    // Check if the required arguments are provided
    if (argc != 2) {
        printf("Usage: %s pattern\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];
    char line[MAX_LINE_LENGTH];

    // Read lines from standard input until end of file
    while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
        // Check if the pattern exists in the current line
        if (strstr(line, pattern) != NULL) {
            // Print the line if the pattern exists
            printf("%s", line);
        }
    }

    return 0;
}
