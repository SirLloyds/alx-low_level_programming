#include "main.h"

/**
 * flip_bits - numbers of bits to change form one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, b = 0;
unsigned long int cur;
unsigned long int exclusive = n ^ m;

for (a = 63; a >= 0; a--)
{
cur = exclusive >> a;
if (cur & 1)
b++;
} return (b);
}
