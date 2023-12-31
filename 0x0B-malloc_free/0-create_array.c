#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array of size size and assign c
 *@size: size of array
 *@c: char to assign
 *Description: create an array of size size and assign char c
 *Return a pointer if size 0 or  NULL
 *Returns NULL if size = 0
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
