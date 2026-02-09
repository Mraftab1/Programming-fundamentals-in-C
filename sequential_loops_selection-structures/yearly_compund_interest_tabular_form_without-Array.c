#include<stdio.h>
int main()
{
    int principal=100000;
    int interest;
    int cents;
    int dollar;
    int original_principal;
    printf("%4s", "Year");
    for(int j=5; j<=10; j++){
        printf("%7d%s", j, "% interest." );
    }
    printf("\n");
    for(int year=1; year<=10; year++){
        printf("%4d", year);
           for(int rate=5; rate<=10; rate++){
                interest= (rate*principal)/100;
                principal+=interest;
                dollar=principal/100;
                cents=dollar%100;
                printf("%15d.%-2d", dollar, cents);
                if(rate==5){
                    original_principal=principal;
                }

            }
            principal=original_principal;
            printf("\n");
    }


    return 0;
}