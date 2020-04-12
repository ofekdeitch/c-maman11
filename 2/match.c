#include <stdio.h>
#include "match.h"

int main()
{
    char text[MAX_LENGTH];
    char pattern[MAX_LENGTH];

    get_input("Please insert text: ", text);
    printf("\n");
    get_input("Please insert a pattern: ", pattern);
    printf("\n");
    printf("\n");

    print_input(text, pattern);
    printf("longest match was found at: %d\n", match(text, pattern));

    return 0;
}

void get_input(char *message, char *str)
{
    char c;
    int i = 0;

    printf("%s", message);

    while (i < MAX_LENGTH && EOF != (c = getchar()))
    {
        str[i++] = c;
    }

    str[i] = EOF;
}

void print_input(char text[], char pattern[])
{
    printf("your text is: ");
    print_string(text);
    printf("\n");

    printf("your pattern is: ");
    print_string(pattern);
    printf("\n");
}

void print_string(char str[])
{
    char c;
    int i = 0;

    while (EOF != (c = str[i++]))
    {
        printf("%c", c);
    }
}

int match(char text[], char pattern[])
{
    int inconsistencies[MAX_LENGTH];

    char t_current, p_current, t_compare;
    int i = 0;
    int j = 0;

    init_consistencies(inconsistencies);

    while (END != (t_current = text[i]))
    {
        j = 0;
        inconsistencies[i] = 0;

        while (END != (p_current = pattern[j]))
        {
            if (t_current == END || (t_compare = text[i + j]) != p_current)
            {
                ++inconsistencies[i];
            }

            ++j;
        }
        ++i;
    }

    return find_min_index(inconsistencies);
}

void init_consistencies(int arr[])
{
    int i;

    for (i = 0; i < MAX_LENGTH; i++)
    {
        arr[i] = -1;
    }
}

int find_min_index(int *arr)
{
    int min = arr[0];
    int min_index = 0;
    int i = 1;

    while (i < MAX_LENGTH && arr[i] > -1)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }

        ++i;
    }

    return min_index;
}
