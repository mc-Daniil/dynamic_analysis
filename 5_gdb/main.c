#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    const char *correct = "secret";
    if (strncmp(argv[1], correct, 6) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied.\n");
    }
    return 0;
}