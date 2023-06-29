#include <stdio.h>
/**
 * main - Entry point of the program using puts
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
