#include<stdio.h>
int main()
{
    int number;
    int factorial;
    int counter;
    int number2;
    printf("Enter the number: ");
    scanf("%d", &number);
    factorial=number;
    number2=number;
    counter=1;
    while(counter<number){
        number2--;
        factorial=factorial*(number2);
        counter++;

    }
    printf("The %d! is %d.", number, factorial);



    return 0;
}