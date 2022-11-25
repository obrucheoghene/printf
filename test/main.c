#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;

	len += printf("%c", '\0');
	printf("[%d]", len);

	return (len);
}
