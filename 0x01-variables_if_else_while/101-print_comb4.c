#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int numb1 = '0';
	int numb2 = '0';
	int numb3 = '0';

	while (numb1 <= '9')
	{
		while (numb2 <= '9')
		{
			numb3 = '0';
			while (numb3 <= '9')
			{
				if (numb1 < numb2 && numb2 < numb3)
				{
					putchar(numb1);
					putchar(numb2);
					putchar(numb3);

					if (numb1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				numb3++;
			}
			numb2++;
		}
		numb1++;
		numb2 = '0';
	}
	putchar('\n');
	return (0);
}
