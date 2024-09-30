#include <stdio.h>
#include <stdlib.h>

int main()
{
    int book_ID, due_date, return_date,days_overdue;
    float fine_amount;
    printf("Enter the book_ID, due_date, return_date: ");
    scanf("%d%d%d", &book_ID, &due_date, &return_date);

    days_overdue = return_date - due_date;

    if(days_overdue<=7){
        fine_amount = days_overdue * 20;
        printf("Fine rate is ksh. 20 per day \n ");
    }
    else if(days_overdue <=14){
        fine_amount = days_overdue * 50;
        printf("Fine rate is ksh.50 per day \n");
    }
    else {
            fine_amount = days_overdue * 100;
            printf("Fine rate is Ksh. 100 per day \n");
    }
    printf("Days overdue: %d \n",days_overdue);
    printf("Fine amount: Ksh.%.2f \n",fine_amount);

    return 0;
}
