#include<stdio.h>
int main()
{
    int rate;
    int compound;
    int principal5=100000;
    int principal6=100000;
    int principal7=100000;
    int principal8=100000;
    int principal9=100000;
    int principal10=100000;


        for(int year=1; year<=10; year++){
                printf("%-15d", year);
                for(int j=5; j<=10; j++){
                    if(j==5){
                        compound=j*principal5/100;
                        principal5+=compound;
                        printf("%15d.%02d", principal5/100, principal5%100);
                    }
                    if(j==6){
                        compound=j*principal6/100;
                        principal6+=compound;
                        printf("%15d.%02d", principal6/100, principal6%100);
                    }
                    if(j==7){
                        compound=7*principal7/100;
                        principal7+=compound;
                        printf("%15d.%02d", principal7/100, principal7%100);
                    }
                    if(j==8){
                        compound=j*principal8/100;
                        principal8+=compound;
                        printf("%15d.%02d", principal8/100, principal8%100);
                    }
                    if(j==9){
                        compound=j*principal9/100;
                        principal9+=compound;
                        printf("%15d.%02d", principal9/100, principal9%100);
                    }
                    if(j==10){
                        compound=j*principal10/100;
                        principal10+=compound;
                        printf("%15d.%02d", principal10/100, principal10%100);
                    }

                }
                  printf("\n");
    }
    return 0;
}
