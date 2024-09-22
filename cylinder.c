// programming to find the area and volume of a cylinder
#include <stdio.h>

int main() {
    float radius, height, volume, surfacearea;
    float pi=3.142;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    printf("Enter the height: ");
    scanf("%f",&height);

    volume = pi * radius * radius * height;
    printf("The volume is %.2f units cubed \n",volume);

    surfacearea = 2 *pi *radius *radius + 2*pi*radius*height;
    printf("The surfacearea is %.2f units squared \n",surfacearea);

    return 0;
}
