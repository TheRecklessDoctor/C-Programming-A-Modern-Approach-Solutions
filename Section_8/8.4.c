#include <stdio.h>
#define LEN (int)(sizeof(digArray) / sizeof(digArray[0]))

int main(){
    int dig;
    long n;
    int digArray[10] = {0};

    printf("Enter a series of %d numbers: ", LEN);

    for(int i = 0; i < LEN; i+=1){
        scanf("%d", &dig);
        digArray[i] = dig;
    }

    for(int j = LEN-1; j >= 0; j-=1){
        printf("%d ", digArray[j]);
    }
    
    return 0;

    
}