#include "main.h"
/**
 * main - Entry block
 * Description: prints holberton on new line
 * Return: 0
 */
int main(void)
{
	char p[8] = "_putchar";
	int i = 0;
	while (i <= 7)
	{
	_putchar(p[i]);
	++i;
	}
	_putchar('\n');
	return (0);
}
