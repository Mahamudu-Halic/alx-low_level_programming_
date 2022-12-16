#include <stdio.h>
/**
 *main - prints numbers from 1 to 100
 *	 prints fizz if multiple of 3
 *	 prints buzz if multiple of 5
 *	 prints fizzbuzz if multible of both 3 and 5
 *return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}