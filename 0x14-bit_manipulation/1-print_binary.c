#include "main.h"

/**
 * print_binary - prints binary of a decimal number
 * @n: number of binary
 */
void print_binary(unsigned long int n)
{
int h, c = 0;
unsigned long int current;

for (h = 63; h >= 0; h--)
{
current = n >> h;
if (current & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
