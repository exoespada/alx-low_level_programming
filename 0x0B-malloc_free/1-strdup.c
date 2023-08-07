#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *clone;
	int index, length;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;
	clone = malloc(sizeof(char) * (length + 1));

	if (clone == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		clone[index] = str[index];
	}

	clone[length] = '\0';

	return (clone);

}
