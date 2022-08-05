#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readit = open(filename, O_RDONLY), count;
	char *buf = malloc(letters * sizeof(char));

	read(readit, buf, letters);
	for (count = 0; *buf;)
		count += write(1, buf++, 1);

	return (count);
}
