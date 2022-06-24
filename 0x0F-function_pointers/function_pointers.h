#ifndef MAIN
#define MAIN
#include <stddef.h> /* size_t compatibility */
/*Project #0*/
/*pointer typedef for print functions*/
typedef void (*print)(char *);
/*callback function for #0*/
void print_name(char *name, void (*f)(char *));
/*Project #1*/
/*typedef for integer action*/
typedef void (*intaction)(int);
/* on arg0 of size arg1 call arg3 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif/**MAIN.H*/
