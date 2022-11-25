#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;

	len += _printf("%d", INT_MAX);

	_printf("[%d]", len);

	return (len);
}
