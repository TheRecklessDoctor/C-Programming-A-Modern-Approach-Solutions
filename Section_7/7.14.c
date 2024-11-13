#include <stdio.h>
#include <math.h>

int main(){

	double x, y, oldY;

	printf("Enter a positive number: ");
	scanf("%lf",&x);

	y = x/2;
	oldY = y;
	double diff;
	
	while(1){
		y = (y + (x/y))/2;
		diff = y - oldY;
		if(fabs(diff) < 0.00001)
			break;

		oldY = y;
	}

	printf("Square root: %f", y);
}
