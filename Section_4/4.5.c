#include <stdio.h>


int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

	printf("Enter 11 digits: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

	int first = n1 + n3 + n5 + n7 + n9 + n11;
	int second = n2 + n4 + n6 + n8 + n10;	
	int total = 3 * first + second;
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
