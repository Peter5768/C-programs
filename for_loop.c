#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, five;

    printf("enter where to start: ");
    scanf("%d", &i);
    printf("enter where to stop: ");
    scanf("%d", &five);

    for(i; i<= 5; i++){
        printf("number is: %d and cube of the %d is: %d\n",i,i, i*i*i);
    }



    return 0;
}
