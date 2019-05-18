#include <stdio.h>

void reverse(char str[]);

int main() {

	char str[] = "Reverse me";
	reverse(str);
	return 0;
}

void reverse(char str[]) {

	int i, len;

	i = 0;
	while (str[i] != '\0') {
		len++;
		i++;
	}

	char result[len];
	for (i = 0; i < len; i++) {
		result[i] = str[len-i-1];
	}

	printf("%s\n", result);
}