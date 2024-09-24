#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age , income;

    printf("Enter the age and income; ");
    scanf("%d%d",&age, &income);

    if(age >=21 && income >=21000){
            printf("you qualify for the loan \n");
    }

    else{

            printf("you don't qualify \n");

    }
    return 0;
}
