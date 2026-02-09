#include<stdio.h>
int main()
{   int side1;
    int side2;
    int side3;
    for (int a=1; a<=500; a++){
        side1=a*a;
        for(int b=a+1; b<=500; b++){
            side2=b*b;
            for(int c=b+1; c<=500; c++){
                side3=c*c;
                if(side1+side2==side3){
                    printf("It is satisfied as: %d square +%d square =%d square\n", a,b,c);
                }
                if(side1+side3==side2){
                    printf("It is satisfied as: %d square +%d square =%d square\n", a,c,b);
                }
                 if(side2+side3==side1){
                    printf("It is satisfied as: %d square +%d square =%d square\n", b,c,a);
            }
        }
    }
    }



    return 0;
}