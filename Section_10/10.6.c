#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#define STACK_SIZE 100

/* External Variables */
int contents[STACK_SIZE];
int top = 0;

void process_equation(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void){
	int op, result;
	int ch;
	printf("Enter an RPN expression: ");

	while(1){
		int op1, op2;
		int res;
		ch = getchar();
		
		if(ch == ' '){
			continue;
		}else if(ch >= '0' && ch <= '9'){
			push(ch - '0');
		}else if(ch == '+'){
			op1 = pop();
			op2 = pop();
			res = op1 + op2;
			printf("%c\n", res);
			push(res);
		}else if(ch == '-'){
			op1 = pop();
			op2 = pop();
			res = op1 - op2;
			push(res);
		}else if(ch == '*'){
			op1 = pop();
			op2 = pop();
			res = op1 * op2;
			printf("%c\n", res);
			push(res);
		}else if(ch == '/'){
			op1 = pop();
			op2 = pop();
			res = op1 / op2;
			push(res);
		}else if(ch == '='){
			result = pop();
			
		}else if(ch >= 'a' && ch <= 'z'){
			break;
		}else{
			printf("Value of expression: %lf\n", (float) result );
			op1 = 0;
			op2 = 0;
			res = 0;
			printf("Enter an RPN expression: ");
		}
	}
	return 0;
}

void stack_overflow(void){
	printf("Expression is too complex");
	return;
}

void stack_underflow(void){
	printf("Not enough operands in expression");
	return;
}

void make_empty(void){
	top = 0;
}


bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(int i){
	if(is_full()){
		stack_overflow();
		exit(1);
	}else{
		contents[top++] = i;
	}
}

int pop(void){
	if(is_empty()){
		stack_underflow();
		exit(1);
	}else{
		return contents[--top];
	}
}
