//programming to find area of rectangle;
#include <stdlib.h>

int main()
{
    int length, width, area; //initialisation and declaration;

    printf("Enter the length ");
    scanf("%d", &length);

    printf("Enter the width ");
    scanf("%d", &width);

    area= length * width;
    printf("The area of the rectangle is %d",area);

    return 0;
}
