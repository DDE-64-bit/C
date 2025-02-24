#include <stdio.h>
#include <ctype.h>

int main(int args, char *argv[]){
    char plaintext[51];
    char *key;
    char ciphertext[51];

    int ascii;

    if (args != 2){
        printf("1 argument nodig. \n");
        return 1;
    }

    key = argv[1];

    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    for (int i = 0; plaintext[i] != '\0'; i++){
        plaintext[i] = toupper(plaintext[i]);

        ascii = (int)plaintext[i];
        ascii -= 65;

        ciphertext[i] = key[ascii];
        printf("%c", ciphertext[i]);
    }
    printf("\n");

    return 0;
}