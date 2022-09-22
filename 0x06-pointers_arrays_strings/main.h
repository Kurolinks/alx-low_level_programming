#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
*main - a function
*Description: a function
*void prototypes()
*int prototypes()
*char prototypes()
*@n: parameter n
*@a: parameter a
*/
void reverse_arrays(int *a, int n);
void print_number(int n);
void print_buffer(char *b int size);
int _stcmp(char *s1, char *s2);
char *_$trcat(char *dest, char *src);
char *_$trncat(char *dest, char *src, int n);
char *_$trncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rotl3(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
