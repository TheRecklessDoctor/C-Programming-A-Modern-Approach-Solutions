#include <stdio.h>

#define N 100

void printReverseString(char *a, int length); 


int main(void){
	char array[N], ch;
	int length = 0;
	char terminating;
	char *p = array;

	while((ch = getchar()) != '\n'){

		if(ch == '.' || ch == '?' || ch == '!'){
			terminating = ch;
			break;
		}
		//array[length] = ch;
		*p = ch;
		p++;
		length++;
	}

	printReverseString(array, length);
	putchar(terminating);

	return 0;
}

void printReverseString(char *a, int length){
	int pointer = length-1;
	printf("%d\n", length);
	while(pointer >= 0){
		int wordCount = 0;
		while(pointer >= 0 && *(a + pointer) != ' '){
			// printf("%c\n", *(a + pointer));
			pointer--;
			wordCount++;
		}

		int pointer2 = pointer + 1;
		// printf("%c", *(a + pointer2));
		for(int i = 0; i<wordCount; i++){
			printf("%c",*(a + pointer2));
			pointer2++;
		}
		pointer--;
		putchar(' ');
	}
	return;
}
