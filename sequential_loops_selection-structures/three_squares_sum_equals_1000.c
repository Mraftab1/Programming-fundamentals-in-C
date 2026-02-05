#include<stdio.h>
int main()
{
    int found;
    int a;
    int b;
    int c;
    found=0;
    for(int i=1; i<=100; i++){
            a=i*i;
        for(int j=1; j<=100; j++){
                b=j*j;
            for(int k=1; k<=100; k++){
                    c=k*k;
                    if(a+b+c==1000){
                        found=1;
                        printf("The number would be %d^2+%d^2+%d^2=1000", i,j,k);
                        break;
                    }
                }
                if(found==1){
                    break;}

            }

        if(found==1){
        break;}
    }

    return 0;
}