#include <stdio.h>

int main(){
    int varArray[5][5];
    for(int i = 0; i<5; i+=1){
        printf("Enter row %d: ", i+1);
        for(int j = 0; j < 5; j+=1){
            scanf("%d", &varArray[i][j]);
        }
    }

    int rowT[5] = {0};
    int colT[5] = {0};

    for(int i = 0; i< 5; i+=1){
        for(int j = 0; j < 5; j+=1){
            rowT[i] += varArray[i][j];
            colT[i] += varArray[j][i];
        }
    }

    printf("Row totals: ");
    for(int i = 0; i < 5; i+=1){
        printf("%d  ", rowT[i]);
    }

    printf("\n");
    
    printf("Column totals: ");
    for(int i = 0; i < 5; i+=1){
        printf("%d  ", colT[i]);
    }

    return 0;

}