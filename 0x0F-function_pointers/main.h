#ifndef MAIN_H
#define MAIN_H

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
