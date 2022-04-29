#include<stdio.h>
int main()
{
    int n,i,res=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            res+=i;
        }
    }
    if(res==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}