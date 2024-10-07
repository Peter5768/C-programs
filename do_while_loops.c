#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("Enter where to start: ");
    scanf("%d", &i);

    printf("Enter whereto stop: ");
    scanf("%d", &j);

    do{
        printf("number is: %dand the cube of %d is: %d\n",i,i, i*i*i);
        i++;
    }while (i <= j);

    return 0;
}
