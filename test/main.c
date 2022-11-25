#include "../main.h"

/**
 * main - entry
 * Return: always (0)
 */

int main(void)
{
	int len = 0;

	len += printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	printf("[%d]", len);

	return (len);
}
