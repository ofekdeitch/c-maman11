#ifndef MATCH
#define MATCH

#define MAX_LENGTH 100
#define END '\0'

/**
    @param text 
    @param pattern
    @return - the index in which the pattern had the minimal number of inconsistencies
*/
int match(char text[], char pattern[]);

/**
    @param message - the message that will be displayed when prompting the user to enter input
    @param str - an array, in which the typed input shall be kept within
    @return - no return value
*/
void get_input(char *message, char *str);

/**
    @param text - the text that was entered by the user
    @param pattern - the pattern that was entered by the user
    @return - no return value
*/
void print_input(char text[], char pattern[]);

/**
    @param str - the string which shall be printed
    @return - no return value
*/
void print_string(char str[]);

/**
    @param arr - an array that will be initialized with values prepared for counting inconsistencies
    @return - no return value
*/
void init_consistencies(int arr[]);

/**
    @param arr - an array of numbers (in this case will contain the number of inconsistencies)
    @return - the index in which the number of inconsistencies was found to be minimal
*/
int find_min_index(int *arr);


#endif
