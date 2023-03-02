/*Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
int isprime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int result,n;
    printf("Enter a number to check it is prime or not : ");
    scanf("%d",&n);
    result = isprime(n);
    if(result)
        printf("It is a prime number.");
    else
        printf("It is not a prime number.");

    return 0;
}
