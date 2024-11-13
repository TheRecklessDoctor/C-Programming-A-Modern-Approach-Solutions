#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){

    int characters[26] = {0};
    char c;
    printf("Enter first word: ");
    while((c = getchar()) != '\n' && isalpha(c)){
        c = tolower(c) - 98;
        characters[c] += 1;
    }

    printf("Enter second word: ");
    while((c = getchar()) != '\n' && isalpha(c)){
        c = tolower(c) - 98;
        characters[c] -= 1;
    }

    bool isAnagram = true;
    for(int i = 0; i<26; i++){
        if(characters[i] != 0){
            isAnagram = false;
        }
    }

    if(isAnagram){
        printf("The words are anagrams.");
    }else{
        printf("The words are not anagrams.");
    }

    return 0;


}