#include <stdio.h>

// 25 10 5 1

int main(){
    float change;
    printf("Change owed: ");
    scanf("%f", &change);

    int counter = 0;

    while (1)
    {
        if (change - 25 >= 0){
            change -= 25;
            counter++;
            continue;
        }
        else if (change - 10 >= 0){
            change -= 10;
            counter++;
            continue;
        }
        else if (change - 5 >= 0){
            change -= 5;
            counter++;
            continue;
        }
        else if (change - 1 >= 0)
        {
            change -= 1;
            counter++;
            continue;
        }
        break;
    }

    printf("%d \n", counter);

    return 0;
}