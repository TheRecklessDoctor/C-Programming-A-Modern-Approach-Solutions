#include <stdio.h>

int main(void)
{
	int itemNum;
	float unitPrice;
	int month;
	int day;
	int year;

	printf("Enter item number: ");
	scanf("%d", &itemNum);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnitPrice\t\tPurchase Date\n");
	printf("%-4d\t\t$%4f\t\t%d/%d/%-4d", itemNum, unitPrice, month, day, year);

	return 0;
}
