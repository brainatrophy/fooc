#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[100] = {0};
	fgets(input, sizeof input, stdin);

	for (size_t i = 0; i < sizeof(input); i++) {
		if (input[i] == '\n') {
			input[i] = '\0';
			break;
		}
	}
	printf("%d", (int)strlen(input));

	return 0;
}
