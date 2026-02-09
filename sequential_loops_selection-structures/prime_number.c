#include<stdio.h>
int main()
{   int number;
    int n=0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int prime_number;
    for(int i=1; n<number; i++){
        prime_number=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime_number=0;
            }

        }
        if(i>1){
            if(prime_number==1){
            printf("%d\n", i);
            n++;
        }
        }
    }


   return 0;
}