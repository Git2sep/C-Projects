#include <stdio.h>
#include <math.h>
#include <string.h>

int htoi(char *s);

int main() {

	char *hex = "0x5AF43";

	printf("Convert the hexadecimal value %s to decimal:\n %d\n", hex, htoi(hex));

	return 0;
}

int htoi(char *s) {

	int res = 0, i = 0;
	double power = 0.0, exp = 0.0;

	for (i = 0; s[i] != '\0'; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			exp = (double) (strlen(s) - i);
			power = pow(16.0, exp);
			res = 16 * s[i] + ('0' - '9')));
		}
		else if (s[i] >= 'A' && s[i] <= 'F') {
			exp = (double) (strlen(s) - i);
			power = pow(16.0, exp);
			res = ( (s[i] + (('A' - 'F') * 2)) * power); 
		}
	}

	return res;
}