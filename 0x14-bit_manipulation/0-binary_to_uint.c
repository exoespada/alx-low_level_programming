#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0;

    if (!check_valid_string(b))
        return (0);

    while (*b)
    {
        decimal <<= 1;
        decimal += *b - '0';
        b++;
    }
    return (decimal);
}

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b != '1' && *b != '0')
            return (0);
        b++;
    }
    return (1);
}

