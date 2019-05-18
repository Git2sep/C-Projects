#include <stdio.h>

void print_f_to_c_table(int lower, int upper, int step);
void print_c_to_f_table(int lower, int upper, int step);

int main() {

	print_f_to_c_table(0, 300, 20);
	printf("\n");
	print_c_to_f_table(0, 300, 20);
	return 0;
}

void print_f_to_c_table(int lower, int upper, int step) {

	float f, c;

	printf("Fahrenheit to Celsius Conversion Table\n");
	f = lower;
	while (f <= upper) {

		c = 5 * (f - 32) / 9;
		//3.0: Width and precision. 3 means make it at least 3 characters wide
		//.0 means have 0 characters after a decimal
		printf("F: %3.0f\t| C: %6.1f\n", f, c);
		f += step;
	}
}

void print_c_to_f_table(int lower, int upper, int step) {

	float c, f;

	printf("Celsius to Fahrenheit Conversion Table\n");
	c = lower;
	while (c <= upper) {

		f = (c * (9.0/5.0)) + 32;
		//3.0: Width and precision. 3 means make it at least 3 characters wide
		//.0 means have 0 characters after a decimal
		printf("C: %3.0f\t| F: %6.1f\n", c, f);
		c += step;
	}
}