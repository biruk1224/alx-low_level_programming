#include <stdio.h>
/**
 * main - just here c++
 *Return: just say okay
 */
int main(void)
{
	char base16;

	for (base16 = '0'; base16 <= '9'; ++base16)
	{
	putchar(base16);
	}
	for (base16 = 'a'; base16 <= 'f'; ++base16)
	{
	putchar(base16);
	}
	putchar('\n');
	return (0);
}
