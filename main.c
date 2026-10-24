#include <stdio.h>

int clamp(int value, int lo, int hi) {
	if      (value < lo) return lo;
	else if (value > hi) return hi;
	else                 return value;
}

int main(void)
{
	int lo, hi = 0;
	int n = 0;
	scanf("%d %d\n", &lo, &hi);
	scanf("%d\n", &n);

	int current;
	for (int i = 0; i < n; i++) {
		scanf("%d", &current);
		printf("%d\n", clamp(current, lo, hi));
	}

	return 0;
}
