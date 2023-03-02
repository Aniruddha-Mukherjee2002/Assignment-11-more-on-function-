/* Write a program in C to find the square of any number using the function. */
#include<stdio.h>
int square(int n)
{
   return n*n;
}
int main()
{
    int s;
    printf("Enter a number : ");
    scanf("%d",&s);
    printf("Square of %d is %d",s,square(s));
    return 0;
}
