#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned long int width, height = 0;
	scanf("%ld", &width);
	scanf("%ld", &height);

	printf("%ld\n", width * height);
	printf("%.2f\n", (float)width / (float)height);

	return 0;
}
