#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
int _length(char *str);
int check_number(char *str);
int error_exit(void);
int error_exit(void);
int check_number(char *str);
int _length(char *str);

#endif /* MAIN_H */
