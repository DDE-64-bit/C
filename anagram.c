#include <stdio.h>
#include <ctype.h>

int letterCheck(char string[51]){
    int counter[26] = {0};
    int ascii;

    for (int i = 0; string[i] != '\0'; i++){
        if (!isalpha(string[i])){
            continue;
        }

        string[i] = toupper(string[i]);

        ascii = (int)string[i] -65;
        counter[ascii] = string[i];

        return counter[26];
    }
}

int valueCheck(int counter1[26], int counter2[26]){
    int same = 1;

    for (int i = 0; i < 26; i++){
        if (counter1[i] == counter2[i]){
            continue;
        }
        else {
            same -= 1;
            break;
        }
    }

    if (same == 1){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    char string1[51];
    char string2[51];

    printf("String 1: ");
    fgets(string1, sizeof(string1), stdin);

    printf("String 2: ");
    fgets(string2, sizeof(string2), stdin);
    
    int counter1[26] = letterCheck(string1);
    int counter2[26] = letterCheck(string2);

    if (valueCheck(counter1, counter2) == 1){
        printf("Het is een anagram! \n");
    }
    else {
        printf("Het is geen anagram ): \n");
    }

    return 0;
}