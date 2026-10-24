#include <stdio.h>

int main(void)
{
	int input;
	scanf("%d", &input);

	int divThree = input % 3 == 0;
	int divFive  = input % 5 == 0;

	if (divThree && divFive) puts("FizzBuzz");
	else if (divThree)       puts("Fizz");
	else if (divFive)        puts("Buzz");
	else                     printf("%d\n", input);

	return 0;
}
