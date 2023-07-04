#include<stdio.h>
void main()
{
    int n;
    int r;
    int rev=0;

    printf("Enter a number:\n");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    printf("Reverse number is:%d",rev);

}