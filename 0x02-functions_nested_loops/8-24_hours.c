#include "main.h"
/**
  * jack_bauer - print every minute
  *
  * Return: nothing
  */

void jack_bauer(void)
{
	char a, b, c, d;
	int e;
	char str[6] = "00:00";

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; (a < '2' && b <= '9') || (a == '2' && b < '4'); b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					str[0] = a;
					str[1] = b;
					str[3] = c;
					str[4] = d;
					for (e = 0; e < 6; e++)
					{
						_putchar(str[e]);
					}
					_putchar('\n');
				}
			}
		}
	}
}
