#include <stdio.h>
/**
 * main - just here c++
 *Return: just say okay
 */
int main(void)
{
	int base10;

	for (base10 = '0'; base10 <= '9'; base10++)
	{
	putchar(base10);
	if (base10 != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
