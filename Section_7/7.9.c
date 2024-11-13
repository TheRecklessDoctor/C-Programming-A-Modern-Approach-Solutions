#include <stdio.h>

int main(){

	int hour, min;
	char fi, sec;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &hour, &min, &fi, &sec);

	if(fi == 'A' && hour == 12){
		hour = 0;
	}else if(fi == 'P' && hour != 12){
		hour = hour + 12;
	}

	printf("Equivalent 24-hour time: %.2d:%.2d %c%c", hour, min, fi, sec);
	return 0;
}
