#include <stdio.h>

typedef struct {
	int x, y;
} Point;

int dist2(Point a, Point b)
{
	int x_sq = (b.x - a.x);
	int y_sq = (b.y - a.y);
	return x_sq*x_sq + y_sq*y_sq;
}

int main(void)
{
	Point a, b = {0};
	scanf("%d\n%d\n%d\n%d", &a.x, &a.y, &b.x, &b.y);

	printf("%d\n", dist2(a, b));

	return 0;
}
