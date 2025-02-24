#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[101];
    char ascii;
    int letters;

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    //printf("%s \n", text);

    char newText[101];

    for (int i = 0; text[i] != "\n"; i++){
        text[i] = toupper(text[i]);
        ascii += (int)text[i];

        if (ascii - 64 >= 26 && ascii - 64 > 0){
            letters++;
        }
    }
    
    letters /= 100;
    
    return 0;
}