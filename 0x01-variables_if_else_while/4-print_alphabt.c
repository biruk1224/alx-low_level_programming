#include <stdio.h>
/**
 * main - just here c++
 *Return: just say okay
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	if (alphabet != 'e' && alphabet != 'q')
	{
	putchar(alphabet);
	}
	}
	putchar('\n');
	return (0);
}
