#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   struct student{
   char name[5];
   char regNo[30];
   char email[30];
   int id;
   int phone;
   float marks;
   }student1;

   int main()
   {
       strcpy(student1.name, "peter");
       strcpy(student1.regNo, "BCS-05-0122/2024");
       strcpy(student1.email, "peteropuru1@gmail.com");
       student1.id = 176317846;
       student1.phone = 7378786;
       student1.marks = 85.5;

     printf("name: %s\n",student1.name);
     printf("regNo %s\n",student1.regNo);
     printf("email %s\n",student1.email);
     printf("id %d\n",student1.id);
     printf("phone %d\n",student1.phone);
     printf("marks %.2f\n",student1.marks);

    return 0;
}
