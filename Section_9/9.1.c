#include <stdio.h>

#define N 10

void selectionSort(int a[], int n, int minIndex);


int main(void){

	int a[N], i;

	printf("Enter %d integers: ", N);
	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	int minIndex = 0;

	selectionSort(a, N, minIndex);

	printf("Sorted list: ");
	for(int j = N-1; j >= 0; j--){
		printf("%d ", a[j]);
	}

	return 0;

}


void selectionSort(int a[], int n, int minIndex){

	if(minIndex == n) return;

	int maximum = a[minIndex];
	int maxInd = minIndex;
	for(int i = minIndex + 1; i < n; i++){
		if(a[i] > maximum){
			maximum = a[i];
			maxInd = i;
		}
	}	

	int temp = maximum;
	a[maxInd] = a[minIndex];
	a[minIndex] = maximum;

	selectionSort(a, n, minIndex+1);

	
}
