#include <stdio.h>


int main()
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, ch, first_sum, second_sum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter the first group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter the second group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the final digit: ");
	scanf("%1d", &ch);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	int final_total = 9 - ((total - 1) %10);

	if(final_total == ch)
	{
		printf("Valid");
	}else
	{
		printf("Not Valid");
	}
	return 0;


}
