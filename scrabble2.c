#include <stdio.h>
#include <ctype.h>

int main(){
    char woord1[51], woord2[51];

    int score1 = 0, score2 = 0;
    int ascii;
    
    int points[27] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};

    printf("Player 1: ");
    scanf("%s", woord1);

    printf("Player 2: ");
    scanf("%s", woord2);

    //printf("%s \n", woord1);

    for (int i = 0; woord1[i] != '\0'; i++){
        woord1[i] = toupper(woord1[i]);

        ascii = (int)woord1[i];
        ascii -= 65;
        score1 += points[ascii];
    }

    for (int i = 0; woord2[i] != '\0'; i++){
        woord2[i] = toupper(woord2[i]);

        ascii = (int)woord2[i];
        ascii -= 65;
        score2 += points[ascii];
    }

    if (score1 > score2){
        printf("Player 1 wins! \n");
    }
    else if (score1 < score2){
        printf("Player 2 wins! \n");
    }
    else if (score1 == score2){
        printf("Tie! \n");
    }
    else{
        printf("Mhhhh raar.... \n");
    }

    //printf("%d\n", score);

    return 0;
}