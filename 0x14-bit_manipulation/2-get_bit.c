#include "main.h"

/**
 * get_bit - return bit to decimal number
 * @n: number of search
 * @index: index of a bit
 *
 * Return: return value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int b;
if (index > 63)
return (-1);
b = (n >> index) & 1;
return (b);
}
