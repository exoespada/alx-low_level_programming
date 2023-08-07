#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *cat_string;
	int index, cat_index = 0,  length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		length++;

	cat_string = malloc(sizeof(char) * length);

	if (cat_string == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		cat_string[cat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		cat_string[cat_index++] = s2[index];

	return (cat_string);
}
