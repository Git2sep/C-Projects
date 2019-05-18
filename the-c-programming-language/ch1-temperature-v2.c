#include <stdio.h>

void print_f_to_c_table();
void print_c_to_f_table();

#define LOWER 		0
#define UPPER 		300
#define DECREMENT 	20

int main() {

	print_f_to_c_table();
	printf("\n");
	print_c_to_f_table();
	return 0;
}

void print_f_to_c_table() {

	int f = 0;
	float c = 0.0;

	printf("Fahrenheit to Celsius Conversion Table\n");
	for (f = UPPER; f >= LOWER; f -= DECREMENT) {
		c = (5.0 / 9.0) * (f - 32);
		printf("F: %3.0d\t| C: %6.1f\n", f, c);
	}
}

void print_c_to_f_table() {
	
	int c = 0;
	float f = 0.0;

	printf("Celsius to Fahrenheit Conversion Table\n");
	for (c = UPPER; c >= LOWER; c -= DECREMENT) {
		f = (c * (9.0 / 5.0)) + 32;
		printf("C: %3.0d\t| F: %6.1f\n", c, f);
	}
}