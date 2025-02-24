#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int args, char *argv[]){
    int key;
    int ascii;
    
    char ciphertext[51];

    if (args != 2){
        printf("Usage: ./a.out key \n");
        return 1;
    }

    key = atoi(argv[1]);

    printf("ciphertext: ");
    fgets(ciphertext, sizeof(ciphertext), stdin);

    for (int i = 0; ciphertext[i] != '\0'; i++){
        ciphertext[i] = toupper(ciphertext[i]);
    }

    for (int i = 0; ciphertext[i] != '\0'; i++){
        ascii = (int)ciphertext[i];
        ascii -= 64;
        ascii -= key;

        if (ascii < 0){
            ascii += 26;
        }
        ascii += 64;

        char letter = (char)ascii;
        printf("%c", letter);
    }
    printf("\n");
    
    return 0;
}