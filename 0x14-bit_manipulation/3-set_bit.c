#include "main.h"

/**
 * set_bit - sets a bit at position to 1
 * @n: number to be used
 * @index: index to be set
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    *n |= 1UL << index;
    return (1);
}

