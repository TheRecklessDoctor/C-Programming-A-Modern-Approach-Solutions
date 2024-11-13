#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void){
	char walk[N][N];

	generate_random_walk(walk);
	print_array(walk);

	return 0;
}


void generate_random_walk(char walk[N][N]){

	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			walk[i][j] = '.';
		}
	}

	int i = 0;
	int start_row = 0;
	int start_col = 0;
	char letter = 'A';
	srand((unsigned) time(NULL));

	walk[0][0] = 'A';

	while(i < 26){

		int random_num = rand() % 4;
		printf("rand: %d\n", random_num);

		if(random_num == 0 && start_row - 1 >= 0 && walk[start_row-1][start_col] == '.'){

			letter += 1;
			walk[start_row-1][start_col] = letter;
			start_row -= 1;

		}else if(random_num == 1 && start_col + 1 < N && walk[start_row][start_col+1] == '.'){

			letter += 1;
			walk[start_row][start_col+1] = letter;
			start_col += 1;

		}else if(random_num == 2 && start_row + 1 < N && walk[start_row+1][start_col] == '.'){

			letter += 1;
			walk[start_row+1][start_col] = letter;
			start_row += 1;

		}else if(random_num == 3 && start_col - 1 >= 0 && walk[start_row][start_col-1] == '.'){

			letter += 1;
			walk[start_row][start_col-1] = letter;
			start_col -=1;

		}else{
			if(walk[start_row-1][start_col] != '.' && walk[start_row+1][start_col] != '.' && walk[start_row][start_col+1] != '.'&& walk[start_row][start_col-1] != '.'){
				return;
			}
		}

		i += 1;
	}

	return;

}

void print_array(char walk[N][N]){

	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			printf("%c ", walk[i][j]);
		}
		printf("\n");	
	}

	return;
}
