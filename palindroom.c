#include <stdio.h>

int main(){
    char string[51];
    
    printf("Geef een woord of zin: ");
    fgets(string, sizeof(string), stdin);

// hallo
// 01234
// i -2 is laatste


    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] != string[i -1])
    }
}