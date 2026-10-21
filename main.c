#include <stdio.h>
#include <string.h>

int main(void)
{
	int width, height = 0;
	scanf("%d", &width);
	scanf("%d", &height);

	printf("%d\n", width * height);
	printf("%.2f\n", (float)width / (float)height);

	return 0;
}
