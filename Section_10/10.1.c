#include <stdio.h>
#include <stdbool.h>


#define STACK_SIZE 100

/* External Variables */
char contents[STACK_SIZE];
int top = 0;

/*function declariations*/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);


int main(void){
	
	char ch;
	while((ch = getchar()) != '\n'){

		if(ch == '{' || ch == '('){
			push(ch);
		}

		if(ch == '}' || ch == ')'){
			char ret = pop();
			if((ch == '}' && ret == '(') || (ch == ')' && ret == '{')){
				printf("Paranthesis not listed correctly");
				return 0;
			}
		}
	}

	if(!is_empty()){
		printf("Stack is not empty. Paranthesis list incorrctly nested.");
	}else{
		printf("Paranthesis list correctly nested.");
	}

	return 0;
}

void make_empty(void){
	for(int i = 0; i<top; i++){
		contents[i] = '0';
	}
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(char ch){
	if(is_full()){
		stack_overflow();
	}else{
		contents[top++] = ch;
	}
}

void stack_overflow(void){
	printf("Stack overflow!!");
	return;
}

char pop(void){
	if(is_empty()){
		stack_underflow();
		return ' ';
	}else{
		return contents[--top];
	}	
}

void stack_underflow(void){
	printf("Stack underflow!!");
	return;
}
