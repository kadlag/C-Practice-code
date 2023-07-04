#include<stdio.h>
void main()
{
    int n;
    int flag=0;

    printf("enter a number\n");
    scanf("%d",&n);

     for(int i=2;i<=n/2;i++)
     {
        if(n%i==0)
        {
            flag=1;
            break;

        }

     }

      if(flag==1)
      {
        printf("Number is not prime");

      }

    
      else
      {
        printf("Number is prime");
        
      }
}