#include <stdio.h>

int main(void){
	char c;
	int wc, nw;
	double average = 0.0f;
	wc = 1;
	nw = 0;

	printf("Enter a sentence: ");

	while((c = getchar()) != 10){
		if(c == ' '){
			average += wc;
			wc = 0;
			++nw;
		}
		else{
			++wc;
		}
	}
	average = average / nw;

	printf("Average word length: %.1f", average);
	return 0;
}
