#include <stdio.h>
/**
 * main - Print  alphabets in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z') {
			if ((b != 'q' && b != 'e') && b <= 'z')
				putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
