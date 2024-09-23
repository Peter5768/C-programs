#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float principle, rate, time, amount, compoundinterest;
    printf("Enter the principle");
    scanf("%f",&principle);

    printf("Enter the time");
    scanf("%f",&time);

    printf("Enter the rate");
    scanf("%f",&rate);

    amount = principle * pow((1+(rate/100)), time);
    compoundinterest=amount-principle;

    printf("The compoundinterest is %.2f \n",compoundinterest);
    return 0;
}
