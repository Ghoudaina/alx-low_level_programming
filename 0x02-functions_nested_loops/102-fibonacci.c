#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, n;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		n = i + j;
		i = j;
		j = n;
		printf("%lu", n);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}

