#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    int r;
    int num;


    printf("Enter a number\n");
    scanf("%d",&n);

     num=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;

     }


    if(sum==num)
    {
        printf("Number is Armstrong ");

    }

    else{
        printf("Number is not Armstrong");

    }

   
     

}