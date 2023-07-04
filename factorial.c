#include<stdio.h>
void main()
{
    int n;
    int fact=1;


    printf("Enter a number\n");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
          fact=fact*i;

    }

    printf("Factorial of number is %d:",fact);
}