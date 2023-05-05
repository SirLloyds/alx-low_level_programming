#include "main.h"

/**
 * get_endianness - check if machine is lil or big
 * Return: 0 if big and 1 if lil
 */
int get_endianness(void)
{
unsigned int b = 1;
char *a = (char *) &b;
return (*a);
}
