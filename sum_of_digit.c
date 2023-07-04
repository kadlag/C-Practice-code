#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    int r;

    printf("Enter a number\n");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;


    }
    
    printf("Sum of digit:%d",sum);

}