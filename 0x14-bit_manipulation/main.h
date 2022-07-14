#ifndef BITS
#define BITS
/* Standard Libraries */
#include <stddef.h>
#include <string.h>
#include <unistd.h>
/* Macros */
#define max_bits 64 /* Only float types are > 64 bits */
#define bitlen(n)	for (len = 0; (n >> len) > 1; len++)
/* Function Pointers */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

void _putchar(char c);
#endif /* BITS */
