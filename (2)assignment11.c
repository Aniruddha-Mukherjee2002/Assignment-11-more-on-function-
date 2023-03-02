/* Write a function to calculate HCF of two numbers. (TSRS) */
#include<stdio.h>
int hcf(int n,int m)
{
    int max = n > m ? n : m;
    int r;
    for(int i = 2; i < max; ++i)
    {
        if(n %i == 0 && m %i == 0)
        {
            r = i;
        }
    }
    return r;
}
int main()
{
    printf("Enter two numbers : ");
    int n,m;
    scanf("%d %d",&n,&m);
    int result = hcf(n,m);
    printf("HCF of %d and %d is %d",n,m,result);
    return 0;
}
