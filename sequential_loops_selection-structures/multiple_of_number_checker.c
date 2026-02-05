#include<stdio.h>
int main()
{
    int number1;
    int number2;
    printf("Write the number 1: ");
    scanf("%d", &number1);
    printf("Write the number 2: ");
    scanf("%d", &number2);
    if(number1%number2==0){
        printf("Number 1: %d is a multiple of the second  number: %d", number1, number2);

    }
    else{
        printf("Number1: %d is not a multiple of the second number: %d", number1,number2);
    }


    return 0;
}