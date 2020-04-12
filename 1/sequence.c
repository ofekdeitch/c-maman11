#include <stdio.h>
#include <stdbool.h>
#include "sequence.h"

int main()
{
    char str[MAXLENGTH];
    int i = 0;
    char c;

    printf("Please enter some text: ");
    while (i < MAXLENGTH && EOF != (c = getchar()))
    {
        str[i] = c;
        ++i;
    }
    str[i] = EOF;

    f_sequence(str);

    return 0;
}

void f_sequence(char str[])
{
    bool increasing = 1;
    bool non_decreasing = 1;

    bool decreasing = 1;
    bool non_increasing = 1;

    char current;
    char prev = str[0];
    int i = 1;

    while (EOF != (current = str[i++]))
    {
        if (!(prev < current))
        {
            increasing = false;
        }
        if (!(prev <= current))
        {
            non_decreasing = false;
        }
        if (!(prev > current))
        {
            decreasing = false;
        }
        if (!(prev >= current))
        {
            non_increasing = false;
        }

        prev = current;
    }

    printf("\n");
    printf("your input is: ");
    print_string(str);
    printf("increasing: %s\n", bool_to_string(increasing));
    printf("non_decreasing: %s\n", bool_to_string(non_decreasing));
    printf("decreasing: %s\n", bool_to_string(decreasing));
    printf("non_increasing: %s\n", bool_to_string(non_increasing));
}

char *bool_to_string(bool val)
{
    return val ? "true" : "false";
}

void print_string(char str[])
{
    int i = 0;
    char c;

    while (EOF != (c = str[i++]))
    {
        printf("%c", c);
    }

    putchar('\n');
}
