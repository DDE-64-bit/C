#include <stdio.h>

int main(){
    int getal;
    char romein[51];

    start:

    printf("Geef een getal: ");
    scanf("%i", &getal);

    if (getal >= 4000 || getal < 1){
        printf("Geef een waarde van 3999 of kleiner. \n");
        goto start;
    }

    for (int i = 0; getal != 0; i++)
    {
        if (getal - 1000 > 0){
            getal -= 1000;
            romein[i] = "M";
        }
        else if (getal - 900 > 0){
            getal -= 900;
            romein[i] = 'C';
            romein[i + 1] = 
        }
        else if (getal - 500 > 0){
            getal -= 500;
            romein[i] = "D";
        }
        else if (getal - 500 > 0)
        {
            getal -= 400;
            romein[i] = "CD";
        }
        else if (getal - 100 > 0){
            getal -= 100;
            romein[i] = "C";
        }
        else if (getal - 90 > 0){
            getal -= 90;
            romein[i] = "XC"
        }
        else if (getal - 40 > 0){
            getal -= 40;
            romein[i] = "XL";
        }
        else if (getal - 10 > 0){
            getal -= 10;
            romein[i] = "10";
        }
        else if (getal - 9 > 0){
            getal -= 9;
            romein[i] = "IX";
        }
        else if (getal - 5 > 0){
            getal -= 5;
            romein[i] = "V";
        }
        else if (getal - 4 > 0){
            getal -= 4;
            romein[i] = "IV";
        }
        else if (getal - 1 > 0){
            getal -= 1;
            romein[i] = "I";
        }
    }

    printf("Romeinse weergave: ");

    for (int i = 0; romein[i] != '\0'; i++){
        printf("%s", romein[i]);
    }

    printf("\n");
}