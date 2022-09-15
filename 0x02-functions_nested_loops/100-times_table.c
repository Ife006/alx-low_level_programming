#include "main.h"

/**
 * prints_times_table - prints n times tables starting from 0
 * @n: the given number
 */
void prints_times_table(int n)
{
	int num;
	int mult;
	int prod;

	if (n > 15 || n < 0)
	{
		_putchar(' ');
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult ++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod < n)
				{
					_putchar(' ');
				}
				else
				{
					if (prod >= n)
					{
						int number;

						num = prod / 10;
						_putchar((number / 10) + '0');
						_putchar((number % 10) + '0');
					}
					else
					{
						_putchar((prod / 10) + '0');
					}

					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
