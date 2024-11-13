#include <stdio.h>

int main(void){
	char c;
	int count = 0;

	while((c = getchar()) != 10){
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c  == 'E' || c == 'O' || c == 'U'){
			++count;
		}
	}
	printf("Your sentence contains %d vowels.\n", count);
	return 0;
}
