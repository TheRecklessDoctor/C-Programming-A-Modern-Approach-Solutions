#include <stdio.h>

int main(){

	int dig;
	long n;
	int digArray[10] = {0};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0){
		while(n != 0){
			dig = n % 10;
			digArray[dig] += 1;	
			n = n / 10;
		}

		scanf("%ld", &n);

	}

	int len = (sizeof(digArray) / sizeof(digArray[0]));

	for(int i = 0; i < len; i+=1){
		if(digArray[i] > 1){
			printf("%d ", i);
		}
	}


	return 0;
}
