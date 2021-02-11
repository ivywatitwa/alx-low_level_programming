#include "holberton.h"
/**
  * print_number - prints a number passed to it.
  * @n: number to be printed
  *
  * Return: void
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

