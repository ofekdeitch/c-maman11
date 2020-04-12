#include <stdio.h>

int MAX_LENGTH = 100;
char END = '\0';

void init_consistencies(int arr[]);

int find_min_index(int *arr);

int find_longest_pattern(char text[], char pattern[]) {
    int inconsistencies[MAX_LENGTH];
    init_consistencies(inconsistencies);
    int i = 0, j = 0;

    char t_current, p_current, t_compare;

    while (END != (t_current = text[i])) {
        j = 0;
        inconsistencies[i] = 0;

        while (END != (p_current = pattern[j])) { ;

            if (t_current == END || (t_compare = text[i + j]) != p_current) {
                ++inconsistencies[i];
            }

            ++j;
        }
        ++i;
    }

    return find_min_index(inconsistencies);
}

void init_consistencies(int arr[]) {
    for (int i = 0; i < MAX_LENGTH; i++) {
        arr[i] = -1;
    }
}

int find_min_index(int *arr) {
    int min = arr[0];
    int min_index = 0;
    int i = 1;

    while (i < MAX_LENGTH && arr[i] > -1) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }

        ++i;
    }

    return min_index;
}