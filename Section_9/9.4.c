#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main(void){

    int counts[26] = {0};
    int counts2[26] = {0};

    read_word(counts);
    read_word(counts2);

    bool isAnagram = equal_array(counts, counts2);
    printf("The words are anagrams: %s", isAnagram ? "true": "false");

    return 0;
}

void read_word(int counts[26]){

    printf("Enter a word: ");
    char ch;
    char lower;
    while((ch = getchar()) != '\n'){
        lower = tolower(ch);
        counts[lower - 97] += 1;
    }
}

bool equal_array(int counts[26], int counts2[26]){
    bool isAnagram = true;
    for(int i = 0; i<26; i++){
        isAnagram = counts[i] == counts2[i] ? true : false;
        if(!isAnagram){
            return isAnagram;
        }
    }

    return isAnagram;
}
