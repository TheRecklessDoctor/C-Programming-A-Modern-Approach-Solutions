#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 100

bool isPalindrome(char *array, int length);
bool isPalindromeV2(char *start, char *end, int length);


int main(void){
	char array[N];
	int length = 0;
	char ch;

	while((ch = getchar()) != '\n'){
		if((ch >= 'A' && ch <= 'Z')){
			ch = tolower(ch);
		}

		if((ch >= '0' && ch <= '9')||(ch >= 'a' && ch <= 'z')){
			array[length] = ch;
			length++;
		}
	}

	//bool res = isPalindrome(array, length);
	bool res = isPalindromeV2(&array[0], &array[length-1], length);

	printf("The string is palindrome: ");
	printf("%s", res ? "true" : "false");


	return 0;
}
// using arrays as pointers normally
bool isPalindromeV2(char *start, char *end, int length){
	int counter = 0;
	while(counter <= (int)length/2){
		if(*(start) != *(end)){
			return false;
		}
		start++;
		end--;
		counter++;
	}
	return true;
}


// using array name as pointer
bool isPalindrome(char *array, int length){
	int counter = 0; 
	printf("%d", length);
	while(counter <= (int)length/2){
		printf("%c", *(array+counter));
		if(*(array+counter) != *(array + length-counter-1)){
			return false;
		}
		counter++;
	}

	return true;
}
