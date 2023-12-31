#ifndef FUNCTION_POINTERTS_H
#define FUNCTION_POINTERTS_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
