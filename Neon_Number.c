#include<stdio.h>
int main()
{
    int r,s=0,a,n;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if(n==s)
    {
    printf("Neon Number");
    }
    else
    printf("Not Neon Number");
    return 0;
}