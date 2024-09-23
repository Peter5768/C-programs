// programming to find the simple interest
#include<stdio.h>

int main() {
    float principle, time, rate, simpleinterest;
    printf("Enter the principle");
    scanf("%f",&principle);

    printf("Enter the time");
    scanf("%f",&time);

    printf("Enter the rate");
    scanf("%f",&rate);

    simpleinterest = principle * time * rate;
    printf("The simple interest is %f",simpleinterest);

 return 0;
}
