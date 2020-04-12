#include <stdio.h>
#include "pattern_finder.h"

void get_input(char *message, char *str);

void print_input(char text[], char pattern[]);

void print_string(char str[]);

const int MAXLENGTH = 100;

int main() {
    char text[MAXLENGTH];
    char pattern[MAXLENGTH];

    get_input("Please insert text: ", text);
    printf("\n");
    get_input("Please insert a pattern: ", pattern);
    printf("\n");
    printf("\n");

    print_input(text, pattern);
    printf("longest match was found at: %d\n", find_longest_pattern("vviaaa", "viva"));

    return 0;
}

void get_input(char *message, char *str) {
    char c;
    int i = 0;

    printf("%s", message);

    while (i < MAXLENGTH && EOF != (c = getchar())) {
        str[i++] = c;
    }

    str[i] = EOF;
}

void print_input(char text[], char pattern[]) {
    printf("your text is: ");
    print_string(text);
    printf("\n");

    printf("your pattern is: ");
    print_string(pattern);
    printf("\n");
}

void print_string(char str[]) {
    char c;
    int i = 0;

    while (EOF != (c = str[i++])) {
        printf("%c", c);
    }
}