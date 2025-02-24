#include <stdio.h>
#include <ctype.h>

int main(){
    char string[51];
    int counter[26] = {0};
    int ascii;

    printf("input: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++){
        string[i] = toupper(string[i]);

        // Hallo ---> HALLO
        // 72-65-76-76-79
        // (-65) ---> 7-0-11-11-14
        // count = [1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 1]
        // voor counter[i] print != 0

        ascii = (int)string[i];

        ascii -= 65;

        counter[ascii] += 1;
    }

    for (int i = 0; i < 26; i++){
        if (counter[i] != 0){
            ascii = i +65;

            char letter = (char)ascii;
            printf("%c: %d \n", letter, counter[i]);
        }
    }

    return 0;
}