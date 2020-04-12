#include <stdio.h>
#include "sequence.h"

void f_sequence(char str[]);

const int MAXLENGTH = 5;

int main() {
    char str[MAXLENGTH];
    int i = 0;
    char c;

    printf("Please enter some text: ");
    while (i < MAXLENGTH && EOF != (c = getchar())) {
        str[i] = c;
        ++i;
    }
    str[i] = EOF;

    f_sequence(str);

    return 0;
}
