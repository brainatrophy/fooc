#include <stdio.h>

int main(void)
{
	int input;
	scanf("%d", &input);

	long long int total = 0;
	for (int i = 1; i <= input; i += 2) {
		total += i;
	}
	printf("%lld\n", total);

	return 0;
}
