#include <stdio.h>

typedef struct Range {
	int data[5];
	int length;
	int highest;
} Range;

int main(void)
{
	Range r = {
		.data    = {0},
		.length  = sizeof(r.data) / sizeof(r.data[0]),
		.highest = 0,
	};

	for (int i = 0; i < r.length; i++)
		scanf("%d", &r.data[i]);

	r.highest = r.data[0];
	for (int i = 0; i < r.length; i++) {
		if (r.data[i] > r.highest)
			r.highest = r.data[i];
	}
	printf("%d\n", r.highest);

	return 0;
}
