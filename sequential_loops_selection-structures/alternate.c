#include<stdio.h>
int main()
{
    int row;
    int column;
    row=10;
    while(row>=1){
        column=1;
        while(column<=10){
            if(row%2){
                printf(">");
            }
            else{
                printf("<");
            }
            column++;
        }
        printf("\n");
        row--;
    }


    return 0;
}