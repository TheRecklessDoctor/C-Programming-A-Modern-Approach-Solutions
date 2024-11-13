#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void){

    int n;
    printf("Enter a value for n(Size of the magic square): ");
    scanf("%d", &n);

    int magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;


}

void create_magic_square(int n, int magic_square[n][n]){

    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }

    int val = 1;

    // initialise 1
    magic_square[0][n/2] =  val;
    int row = 0;
    int col = n/2;

    int row_prev = 0;
    int col_prev = n/2;

    for(int i = 2; i<=n*n; i++){
        row_prev = row;
        col_prev = col;
        row += 1;
        col += 1;


        if(row >= n){
            row = 0;
        }

        if(col >= n){
            col = 0;
        }

        // printf("%d\n", col);
        val += 1;
        if(magic_square[row][col] != 0){
            if(row_prev + 1 >= n){
                row_prev = 0;
                magic_square[row_prev][col_prev] = val;
            }else{
                magic_square[row_prev + 1][col_prev] = val;
            }
            
        }else{
            magic_square[row][col] = i;
        }
        
        
    }

    return;
}

void print_magic_square(int n, int magic_square[n][n]){

    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }

    return;
}