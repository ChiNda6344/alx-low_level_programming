#include <stdio.h>
/**
 * main - Program that prints numbers of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char b;

	int c;

	b = 'a';
	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	while
		(b <= 'f') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
