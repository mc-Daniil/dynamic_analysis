#include <stdio.h>
#include <string.h>

int main() {
    char input[5];
    const char *correct = "abcd";
    printf("Enter 4 characters: ");
    scanf("%4c", input);
    input[4] = '\0';
    // Очистка буфера ввода
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    if (strcmp(input, correct) == 0) {
        printf("Match!\n");
    } else {
        printf("No match.\n");
    }
    return 0;
}