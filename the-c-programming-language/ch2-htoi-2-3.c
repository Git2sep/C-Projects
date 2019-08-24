#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int htoi(char *s);

int main() {

	char *hex = "0x5AF43";

	printf("Convert the hexadecimal value \"%s\" to decimal:\n%d\n", hex, htoi(hex));

	return 0;
}

int htoi(char *s) {

	int i, val;

	if(s[i] == '0' && (s[i+1]=='x' || s[i+1]=='X')) 
		i += 2;
     
    while(s[i] != '\0') {
       
       if(val > UINT_MAX) 
       		return 0;
       else if(s[i] >= '0' && s[i] <='9') {
          	val = val * 16 + s[i] - '0';
       }
       else if(s[i]>='A' && s[i] <='F') {
          	val = val * 16 + s[i] - 'A' + 10;
       }
       else if(s[i]>='a' && s[i] <='f') {
          	val = val * 16 + s[i] - 'a' + 10;
       }
       else 
       		return 0;
        
       i++;
    }
    return val;
}