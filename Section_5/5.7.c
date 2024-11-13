#include <stdio.h>


int main()
{
	int a, b, c, d, small, large;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int first, second;
	int third, fourth;
	if(a > b)
	{
		first = a;
		third = b;
	}else
	{
		first = b;
		third = a;
	}

	if(c > d)
	{
		second = c;
		fourth = d;
	}else
	{
		second = d;
		fourth = c;
	}
	
	if( first > second)
	{
		large = first;
	}else
	{
		large = second;
	}

	if(third < fourth){
		small = third;
	}else{
		small = fourth;
	}

	printf("The smallest is: %d\nThe largest is: %d", small, large);
	
	return 0;





}
