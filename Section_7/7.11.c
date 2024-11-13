#include <stdio.h>
#include <stdbool.h>
int main(void){
	char first, c, prev;

	
	bool encountered = false;

	printf("Enter a first name and last name: ");

	c = getchar();
	first = c;
	prev = c;

	while((c = getchar()) != 10){
		if(prev == ' '){
			encountered = true;
		}

		if(encountered){
			putchar(c);
		}
		prev = c;
	}

	putchar(' ');
	putchar(first);
	return 0;
}
