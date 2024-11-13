#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
	printf("Enter the first 12 digits of an EAN code: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	int first, second;
	first = n2 + n4 + n6 + n8 + n10 + n12;
	second = n1 + n3 + n5 + n7 + n9 + n11;
	int total = first * 3 + second;

	printf("The check digit: %d", 9 - ((total -1)%10));

	return 0;
}
