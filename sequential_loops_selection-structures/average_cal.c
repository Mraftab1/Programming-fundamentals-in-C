#include<stdio.h>
int main()
{
    int number;
    int value;
    int total;
    int average;
    printf("Enter the number of inputs you want to enter: ");
    scanf("%d", &value);
    total=0;
    for(int i=1; i<=value; i++){
        printf("Enter the number %d: ", i);
        scanf("%d", &number);
        total+=number;

    }
    average=total/value;
    if(value!=0){
        printf("The average is: %d", average);

    }

    return 0;
}