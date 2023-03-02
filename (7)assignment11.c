/*Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
void fibonacci(int n)
{
    int x = 0,y=1,sum;
    for(int i = 0; i < n; i++)
    {
        sum = x+y;
        x = y;
        y = sum;
        printf("%d ",sum);
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
