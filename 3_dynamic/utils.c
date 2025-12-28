#include <stdio.h>

#define HELLO_MSG "Utility function"  // Макрос-строка
#define MAX(a, b) ((a) > (b) ? (a) : (b))  // Макрос-функция

void print_message() {
    puts(HELLO_MSG);
    printf("MAX(10, 20) = %d\n", MAX(10, 20));
}