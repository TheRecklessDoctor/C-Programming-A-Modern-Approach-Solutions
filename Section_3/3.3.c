#include <stdio.h>

int main(void)
{
	int gsi;
	int groupIdentifier;
	int publisherCode;
	int itemNo;
	int checkD;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &groupIdentifier, &publisherCode, &itemNo, &checkD);

	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsi, groupIdentifier, publisherCode, itemNo, checkD);
	return 0;
}
