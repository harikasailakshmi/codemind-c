#include<stdio.h>
int main()
{
    int n,arr[100],sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
    
}