#include<stdio.h>
int main()
{
    int number;
    int i;
    int digit;
    int temp;
    int d1;
    int d2;
    int d3;
    int d4;
    int operation;
    printf("Enter the four digit code: ");
    scanf("%d", &number);
    printf("For encryption press 1 and for decryption press 0.");
    scanf("%d", &operation);

    if (operation==1){
        i=1;
    while(i<=4){
        digit=number%10;
        digit=(digit+7)%10;
        number=number/10;

        if(i==1){
            d2=digit;

        }
        if(i==2){
            d1=digit;
        }
        if(i==3){
            d4=digit;
        }
        if(i==4){
            d3=digit;

        }
        i++;

    }
    printf("The encryption is: %d %d %d %d", d1, d2, d3, d4);
    }

    if (operation==0){
        i=1;
    while(i<=4){
        digit=number%10;
        digit=(digit+10-7)%10;
        number=number/10;

        if(i==1){
            d2=digit;

        }
        if(i==2){
            d1=digit;
        }
        if(i==3){
            d4=digit;
        }
        if(i==4){
            d3=digit;

        }
        i++;

    }
    printf("The decryption is: %d %d %d %d", d1, d2, d3, d4);
    }



    return 0;
}