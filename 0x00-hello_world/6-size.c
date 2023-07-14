#include <stdio.h>
/**
 * main - C program that prints he types of various types on the computer
 *Return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte($)\n", sizeof(a));
	printf("Size of int: %lu byte($)\n", sizeof(b));
	printf("Size of long int: %lu byte($)\n", sizeof(c));
	printf("Size of lon long int: %lu byte($)\n", sizeof(d));
	printf("Size of float: %lu byte($)\n", sizeof(f));
	return (0);
}
