#include <stdio.h>
#include <string.h>

#define MAX_LINES  60
#define LINE_BYTES 256

/* given: read one line of stdin into dst without its newline */
void read_line(char *dst) {
	if (fgets(dst, LINE_BYTES, stdin) == NULL) {
		dst[0] = '\0';
		return;
	}
	size_t k = strlen(dst);
	if (k > 0 && dst[k - 1] == '\n') {
		dst[k - 1] = '\0';
	}
}

/* given: read a count line, then that many text lines */
int read_batch(char batch[][LINE_BYTES]) {
	char head[LINE_BYTES];
	read_line(head);
	int count = 0;
	/* sscanf is scanf reading from a string instead of from stdin */
	sscanf(head, "%d", &count);
	if (count < 0) count = 0;
	if (count > MAX_LINES) count = MAX_LINES;
	for (int i = 0; i < count; i++) {
		read_line(batch[i]);
	}
	return count;
}

int main(void) {
	char morning[MAX_LINES][LINE_BYTES];
	char evening[MAX_LINES][LINE_BYTES];
	int n_morning = read_batch(morning);
	int n_evening = read_batch(evening);
	char path[] = "/tmp/diary.txt";

	/* TODO 1: create the file at `path`, check for NULL, write each of the
	   n_morning lines in morning[] on its own line, then close it. */
	FILE *fp = fopen(path, "w");
	if (fp == NULL)
		return 1;

	for (int i = 0; i < n_morning; i++) {
		fprintf(fp, "%s\n", morning[i]);
	}
	fclose(fp);

	/* TODO 2: open the same file again so that the n_evening lines in
	   evening[] are added after the morning lines, check for NULL,
	   write them, then close it. */
	fp = fopen(path, "a");
	if (fp == NULL)
		return 1;

	for (int i = 0; i < n_evening; i++) {
		fprintf(fp, "%s\n", evening[i]);
	}
	fclose(fp);

	/* TODO 3: open the file for reading, check for NULL, and print every
	   line in it as <number>:<text> (numbered from 1, no newline inside
	   the text), close it, then print the total as below. */
	int total = 0;

	fp = fopen(path, "r");
	if (fp == NULL)
		return 1;

	char buf[LINE_BYTES] = {0};
	while (fgets(buf, sizeof(buf), fp)) {
		total += 1;
		printf("%d:%s", total, buf);
	}
	fclose(fp);

	(void)n_morning;
	(void)n_evening;
	(void)path;
	printf("lines: %d\n", total);
	return 0;
}
