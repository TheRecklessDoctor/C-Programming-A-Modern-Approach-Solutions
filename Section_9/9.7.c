#include <stdio.h>

int power(int x, int n);

int main(void){

    int x, n;
    printf("Enter two values for x and n: ");
    scanf("%d", &x);
    scanf("%d", &n);

    int res = power(x, n);

    printf("The value of %d to the power of %d is %d", x, n, res);

    return 0;

}

int power(int x, int n){
    if(n == 1){
        return x;
    }else{
        if(x % 2 == 0){
            return power(x, n/2) * power(x, n/2);
        }else{
            return power(x, n-1) * x;
        }
    }
}