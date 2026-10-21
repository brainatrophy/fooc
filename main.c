#include <stdio.h>
#include <string.h>

int main(void)
{
	double temp_n1, temp_n2 = 0.0;
	scanf("%lf", &temp_n1);
	scanf("%lf", &temp_n2);

	printf("%f\n", temp_n1 + temp_n2);
	printf("%d\n", (int)(temp_n1 + temp_n2));

	return 0;
}
