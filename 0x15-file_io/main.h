#ifndef FILES
#define FILES
/* Standard Libraries */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/* Function Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* FILES */
