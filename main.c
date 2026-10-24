#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int *values = malloc(n * sizeof(int));
	if (values == NULL)
		return 1;

	int v, i = 0;
	for (; i < n; i++) {
		scanf("%d", &v);
		values[i] = v;
	}

	long int total = 0;
	i -= 1; // reuse iterator
	for (; i >= 0; i--) {
		switch (i) {
		case 0:
			printf("%d\n", values[i]);
			break;
		default:
			printf("%d ", values[i]);
			break;
		}
		total += values[i];
	}
	printf("%ld\n", total);

	free(values);

	return 0;
}
