#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;
	char *s = "-596943495";

	len = _print_dec(s);
	putchar('\n');
	return (len);
}
