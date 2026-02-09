#include<stdio.h>
int main()
{
    int number;
    int customer_id;
    int unit_consumed;
    int bill;
    int result;
    int batch;
    int high_bill=-1;
    int low_bill=999999;
    int high_id=0;
    int low_id=0;
    int fixed_charge=150;
    int total_bill;
    printf("\n<-------------Welcome to the system!!------------->\n");
    do{
        do{
            printf("\nEnter the number of users(max 20): ");
            scanf("%d", &number);
        }while(number>20);

        for(int i=1; i<=number; i++){
            printf("\nEnter the customer ID: ");
            scanf("%d", &customer_id);
            printf("Enter the units consumed: ");
            scanf("%d", &unit_consumed);
            printf("\n");

            printf("---------------------------------------------------\n");
            printf("%s\t%s\t%s\n", "customer ID", "Units consumed", "Total Bill (RS.)");
            printf("---------------------------------------------------\n");
            if(unit_consumed<=100){
                bill=unit_consumed*5;
            }
            if(unit_consumed>100){
                bill=(unit_consumed-100)*7;
                bill=bill+(100*5);
            }
            if(unit_consumed>200){
                result=unit_consumed-200;
                bill=result*10;
                bill=bill+(100*7);
                bill=bill+(100*5);
            }
            total_bill=bill+150;
            printf("%-18d%-18d%-18d\n", customer_id, unit_consumed, total_bill);
            printf("---------------------------------------------------\n");
            if(total_bill>high_bill){
                high_bill=total_bill;
                high_id=customer_id;
            }
            if(total_bill<low_bill){
                low_bill=total_bill;
                low_id=customer_id;
            }

        }
        do{
            printf("\nDo you want to process another batch? (1=Yes, 0=No): ");
            scanf("%d", &batch);
        }while(batch!=1 && batch!=0);

    }while(batch==1);
        printf("\nThe customer ID: %d has the highest bill: %d\n", high_id, high_bill);
        printf("The customer ID: %d has the lowest bill: %d\n", low_id, low_bill);
        printf("\n<---------Thank You for using the system!--------->");

    return 0;
}