/*Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
void Nprime(int n)
{
     int flag = 1;
    for(int i =0; i <= n*2; ++i)
    {
        flag = 1;
        for(int j = 2; j < i; j++)
        {
            if( i % j == 0)
                flag = 0;
        }
        if(flag != 0)
        printf("%d ",i);
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Nprime(n);
    return 0;
}
