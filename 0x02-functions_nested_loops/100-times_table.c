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

	if (num > 15 || n < 0)
	{
		_putcahr(' ');
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0);

			for (mult = 0; mult <= n; mult ++)
			{
				_putchar(', ');
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

						numb = prod / 10;
						_putchar((number / 10) + '0');
						_putchar((number % 10) + '0');
					}
					else
					{
						_putchar((prod / 10) + '0');
					}

					_putchar((prod / 10) + '0');
				}

				_puchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
