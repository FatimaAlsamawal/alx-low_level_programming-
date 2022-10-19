#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table
 * @n: number to stop
 *
 * File: 100-times_table.c
 * Auth: Zuahir Ahmed
 *
 */
void print_times_table(int n)
{
	int num, multi, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar('0');
			for (multi = 1; multi <= 9; multi++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * multi;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
		}
	}
}
