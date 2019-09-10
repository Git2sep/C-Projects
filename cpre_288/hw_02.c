#include <stdio.h>

int main() {

  struct more_compound {
	char *name;
	int  age;
	short pay;
	long *height;

union {
	char short_id;
	int  normal_id;
	char my_id;
} id;


	union {
	char *text_data;
	int  *numeric_data;
	long l_numeric_data;
} data;
};



  printf("%ld\n", sizeof(struct more_compound));
  return 0;
}
