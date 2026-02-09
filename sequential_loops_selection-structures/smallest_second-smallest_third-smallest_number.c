#include<stdio.h>
int main()
{
    int number;
    int smallest;
    int sec_smallest;
    int third_smallest;
    printf("Enter the number(999 to stop) : ");
    scanf("%d", &number);
    smallest=number;
    sec_smallest=9999;
    third_smallest=9999;
    while(number!=999){
        printf("Enter the number(999 to stop) : ");
        scanf("%d", &number);
        if(number<smallest){
            third_smallest=sec_smallest;
            sec_smallest=smallest;
            smallest=number;
        }
        else if(number<sec_smallest){
            third_smallest=sec_smallest;
            sec_smallest=number;
        }
        else if(number<third_smallest)
            third_smallest=number;
    }
    printf("Smallest: %d\n Second smallest: %d\n third smallest: %d", smallest, sec_smallest, third_smallest);

    return 0;
}