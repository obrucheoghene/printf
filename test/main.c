#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;
	char *s = "-596943495";

	len = _printf("My name is %s, I am %d years old ", "Wilfred ", 8);
	return (len);
}
