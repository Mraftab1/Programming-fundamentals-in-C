#include<stdio.h>
int main()
 {
     int grade;
     int aCount=0;
     int bCount=0;
     int cCount=0;
     int dCount=0;
     int fCount=0;
     int total;
     double average;
     printf("Enter the grade (Press ctrl z to exit the program): ");
     while((grade=getchar())!=EOF){
        switch(grade){
            case 'a':
            case'A':
                aCount++;
                break;
            case 'b':
            case'B':
                bCount++;
                break;
            case 'c':
            case 'C':
                cCount++;
                break;
            case 'd':
            case 'D':
                dCount++;
                break;
            case 'f':
            case 'F':
                fCount++;
                break;
            case ' ':
            case '\n':
            case '\t':
                break;
            default:
                printf("Wrong letter entered\n");
                printf("Enter the correct grade or Press ctrl z to exit the program: ");

            }
            }
            total=aCount+bCount+cCount+dCount+fCount;
            if(total!=0){
                average=(float)(aCount*4.0+bCount*3.0+cCount*2.0+dCount*1.0+fCount*0)/total;
                }
            else{
                average=0;
            }
            if (average>3.5){
                printf("The average grade is a");

            }
            else if (average >2.5) {
                printf("The average grade is b");

            }
            else if (average > 1.5){
                printf("The average grade is c");
            }
            else if (average >0.5){
                printf("The average grade is d");
            }
            else
                printf("The average grade is f");

     return 0;
 }