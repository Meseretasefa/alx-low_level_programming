#include "meseret.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  /
  */
void print_number(int n)
{
	int x;
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		n *= -1;
	}

	x = n;
