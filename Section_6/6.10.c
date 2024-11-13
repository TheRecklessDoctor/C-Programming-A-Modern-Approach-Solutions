#include <stdio.h>


int main(){

	int month, date, year;
	int eM, eD, eY;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d",&month,&date,&year);

	eM = month;
	eD = date;
	eY = year;
	while(1){

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d",&month,&date,&year);

		if(month == 0 && date == 0 && year == 0){
			break;
		}

		if(month < eM || date < eD || year < eY){
			eM = month;
			eD = date;
			eY = year;
		}
	}

	printf("%d/%d/%d is the earliest date.", eM, eD, eY);
	return 0;
}
