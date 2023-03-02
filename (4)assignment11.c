/* Write a function to find the next prime number of a given number. (TSRS)*/
#include<stdio.h>
#define max 9999
int nextPrime(int n)
{
   int flag = 0;
   for(int i = n+1; i < max; i++)
   {

       for(int j = 2; j < i; j++)
       {
           if(i % j == 0)
            {
                flag = 1;
            }
       }
       if(flag == 0)
       {
           return i;
       }
       flag = 0;
   }
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int res = nextPrime(n);
    printf("Next prime number of %d is %d",n,res);
    return 0;
}

