#include<stdio.h>
int main()
//fibanauchi series:
{

    int a=1;
    int b=0;
    int number;
    int number2;
    int c;
    int found=0;
    printf("Enter the number till where you want the fibanaucci series: ");
    scanf("%d", &number);
    printf("Enter the number of the series you want the fibanaucci of: ");
    scanf("%d", &number2);
    for(int i=1; i<=number; i++){
        printf("%d\n", b);
        c=a+b;
        b=a;
        a=c;
        if(i==number2-1){
            found=b;
        }

    }
    if (found){
        printf("The %dth fibannuci is: %d\n", number2, found);
    }
    else{
        printf("NO");
    }


    return 0;
}