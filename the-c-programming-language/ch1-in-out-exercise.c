#include <stdio.h>

int main() {

	int ch;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n' || ch =='\t') {
			printf("\n");
		}
		else {
			putchar(ch);
		}
	}
	return 0;
}