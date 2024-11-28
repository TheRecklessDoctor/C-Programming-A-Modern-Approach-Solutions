#include <stdio.h>


#define N 100

void reverse(char *a, int length);
void reverseV2(char *a, char *b, int length);


int main(void){
	char a[N];
	char ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
		a[i] = ch;
		i++;
	}

	//reverse(a, i);
	reverseV2(&a[0], &a[i-1], i);

	return 0;

}
// using an array as a pointer normally
void reverseV2(char *a, char *b, int length){
	char *p;
	for(p = b; p>=a; p--){
		putchar(*p);
	}
	return;
}


// using array name as pointer
void reverse(char *a, int length){
	char *p; 
	for(p = a + length - 1; p >= a; p--){
		putchar(*p);	
	}
	putchar('\n');
	return;
}
