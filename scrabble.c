#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char letters[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    int points[27] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};
    
    char woord1[51], woord2[51];
    int index;

    int score1 = 0; 
    int score2 = 0;

    printf("Player 1: ");
    scanf("%50s", woord1);

    printf("Player 2: ");
    scanf("%50s", woord2);

    for (int i = 0; woord1[i] != '\0'; i++){
        //printf("%c", woord1[i]);
        woord1[i] = toupper(woord1[i]);

        for (int j = 0; j < 26; j++){
            if (woord1[i] == letters[j]){
                score1 += points[j];
                break;
            }
        }
    }
    printf("%d", score1);

    return 0;
}