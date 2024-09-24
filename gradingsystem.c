#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths, physics, chemistry, average;

    printf("Enter the subjects score: ");
    scanf("%d%d%d", &maths, &physics, &chemistry);

    average= (maths + physics + chemistry)/3;

    if (average >=70 && average <=100){
        printf("The grade is A \n");
    }
    else if (average >=60 && average <=69){
        printf("The grade is B \n");
    }
     else if (average >=50 && average <=59){
        printf("The grade is C \n");
    }
    else if (average >=40 && average <=49){
        printf("The grade is D \n");
    }
    else if (average <= 39){
            printf("The grade is(fail) E");

    }

    return 0;
}
