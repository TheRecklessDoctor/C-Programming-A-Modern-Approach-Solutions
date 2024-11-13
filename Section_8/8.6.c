#include <stdio.h>

int main(){

    char msg[1000];
    char ch;

    ch = getchar();
    int i = 0;
    while(ch != '\n'){
        msg[i] = ch;
        ch = getchar();
        i+=1;
    }

    msg[i] = '\n';

    int j = 0;
    char ch2 = msg[j];
    char temp;
    while(ch2 != '\n'){
        if ('a' <= ch2 && ch2 <= 'z'){
            ch2 = ch2 - 'a' + 'A';
        }
        switch(ch2){
            case 'A':
                temp = '4';
                break;
            case 'B':
                temp = '8';
                break;
            case 'E':
                temp = '3';
                break;
            case 'I':
                temp = '1';
                break;
            case 'O':
                temp = '0';
                break;
            case 'S':
                temp = '5';
                break;
            default :
                temp = ch2;   
                break; 
        }
        
        putchar(temp);
        j += 1;
        ch2 = msg[j];
    }
    for(int i = 0; i < 11; i+=1){
        char exc = '!';
        putchar(exc);
    }
    putchar('\n');
    return 0;
}