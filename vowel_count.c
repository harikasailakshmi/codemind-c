#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int j,d=0,l,a=0;
    l=strlen(s);
    for(j=0;j<l;j++)
    {
        if(s[j]=='a'||s[j]=='A'|| s[j]=='u'||s[j]=='U'||s[j]=='e'||s[j]=='E'||s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O')
        {
            a++;
        }
    }
    if(a>0)
    printf("%d",a);
    else
    printf("0");
}