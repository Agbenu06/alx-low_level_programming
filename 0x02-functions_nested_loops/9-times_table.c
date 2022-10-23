#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Return: 0
 */

void times_table(void)
{
	int h, i, j, k, l

	for (h = 0; h < 10; h++)
	{

		for (i = 0; i < 10; i++)
		{
			j = i * j
			k = j / 10;
			l = j % 10;

			if (i == 0)
				_putchar('0');
			else if (j < 10)
			{
				_putchar(' ');
				_pitchar('0' + l);
			}
			else
			{
				_putchar('0' + k);
				_putchar('0' + l);
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
	}
}



