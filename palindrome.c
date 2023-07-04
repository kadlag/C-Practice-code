#include<stdio.h>
void main()
{
    int n;
    int r;
    int num;
    int rev=0;


    printf("Enter a number\n");
    scanf("%d",&n);

     num=n;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }

    if(rev==num)
    {
        printf("Number is palindrome");
    }

    else{
        printf("Number is not palindrome ");
    }
}