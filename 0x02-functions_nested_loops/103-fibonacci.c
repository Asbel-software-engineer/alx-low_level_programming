#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 *less than 400000
 *Return: nothing
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 400000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		k = j + j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
