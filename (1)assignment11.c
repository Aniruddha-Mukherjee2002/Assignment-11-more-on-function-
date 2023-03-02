// write a program to calculate LCM of two numbers.
#include<stdio.h>
int lcm(int n,int m)
{
    int l = 1;
    for(int i = 1; i < n*m; ++i,l++)
    {
        if(l%n == 0 && l%m == 0)
        {
            return l;
        }
    }
}
int main()
{
    int n,m;
    printf("Enter two numbers : ");
    scanf("%d%d",&n,&m);
    printf("lcm of two numbers is %d",lcm(n,m));
    return 0;
}
