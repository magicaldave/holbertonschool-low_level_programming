#ifndef BITS
#define BITS
/* Standard Libraries */
#include <stddef.h>
#include <string.h>
#include <unistd.h>
/* Function Pointers */
unsigned int __pow(unsigned int a, unsigned int b);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

void _putchar(char c);
#endif /* BITS */
