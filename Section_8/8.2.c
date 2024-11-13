#include <stdio.h>

int main(){

	int dig;
	long n;
	int digArray[10] = {0};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n != 0){
		dig = n % 10;
		digArray[dig] += 1;
		n = n / 10;
	}

    int len = sizeof(digArray) / sizeof(digArray[0]);
    for(int i = 0; i < len; i+=1){
        printf("%3d", i);
    }

    printf("\n");

    for(int i = 0; i < len; i+=1){
        printf("%3d", digArray[i]);
    }

    return 0;

}