#include<stdio.h>
int main()
{
    int n,m,i,j,s=0,d=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i%2==0)
                s+=a[i][j];
            else{
                d+=a[i][j];
            }
        }
    }
    printf("%d %d",s,d);
}