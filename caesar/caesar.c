#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    int key;
    int ascii;

    char plaintext[51];
    char cipher[51];

    
    if (argc != 2){
        printf("Usage: ./a.out key \n");
        return 1;
    }
    
    key = atoi(argv[1]);
    
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    for (int i = 0; plaintext[i] != '\0'; i++){
        plaintext[i] = toupper(plaintext[i]);
    }


// plaintext = hallo
// h ---> 72
// key -> 12
// 72 - (64) = 8
// 8 + 12{key} = 20
// 20 --> t
// printf --> t

    printf("ciphertext: ");

    for (int i = 0; plaintext[i] != '\0'; i++){
        ascii = (int)plaintext[i];
        ascii -= 64;
        ascii += key;

        if (ascii > 26){
            ascii -= 26;
        }

        ascii += 64;

        char letter = (char)ascii;
        printf("%c", letter);
    }
    printf("\n");

    return 0;
}