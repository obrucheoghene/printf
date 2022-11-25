#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;

	len += _printf("iddi%diddiiddi\n", 1024);

	_printf("[%d]", len);

	return (len);
}
