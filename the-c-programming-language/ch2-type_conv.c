#include <stdio.h>

/*
	These funstions are very similar to the C standard library of
	ctype.h. This contains conversions of characters, integers, and strings
*/

int atoi(char *s);
char *to_lower(char *s);
int len(char *s);

int main() {

	char str[] = "87645";
	char str2[] = "MAKE ME LOWER";

	printf("Result of the integer string \"%s\" is:\n%d\n", str, atoi(str));
	printf("Result of to_lower: \n\"%s\"\n", to_lower(str2));

	return 0;
}

int atoi(char *s) {

	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		/* 
			(s[i] - '0' gives the numeric value of a char) 
			Then we take this and multiply by the 10's place for each digit
		*/
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

char *to_lower(char *s) {

	int i = 0;
	char res[len(s)];

	for (i = 0; s[i] != '\0'; ++i) {
		//It must be uppercase
		if (s[i] >= 'A' && s[i] <= 'Z') {
			//('a' - 'A') = -32. The distance from 'A' to 'a' is 32 integer values apart
			s[i] = s[i] + ('a' - 'A');
		}
	}

	return s;
}

int len(char *s) {

	int i = 0, count = 0;
	for (i = 0; s[i] != '\0'; ++i) {
		count++;
	}
	return count;
}