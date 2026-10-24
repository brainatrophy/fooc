#include <stdio.h>

void swap(int *left, int *right)
{
	int n = *left;
	*left = *right;
	*right = n;
}

int main(void)
{
	int l, r = 0;
	scanf("%d %d", &l, &r);
	swap(&l, &r);
	printf("%d %d\n", l, r);

	return 0;
}
