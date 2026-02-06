#include<stdio.h>
int main()
{

    int n;
    char digit,digit1;
    do
    {
        printf("Enter odd number for the diamond pattern (1-19): ") ;
        scanf("%d",&n);
    }
    while(n%2==0 || n>19);
    printf("Enter the character: ");
    scanf("%c", &digit);
    scanf("%c", &digit);

    if(digit==' ' || digit=='\n')
    {
        digit1='*';
    }
    else
    {
        digit1=digit;
    }

    for(int i=1; i<=n; i++)
    {

        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++)
        {
            printf("%c",digit1);
        }
        printf("\n");
    }


    for(int i=n; i>1; i--)
    {

        for(int j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=2*i-1; k>2; k--)
        {
            printf("%c",digit1);
        }
        printf("\n");
    }




    return 0;
}