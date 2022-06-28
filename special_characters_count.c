#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,l,c=0;
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]==32){
            continue;
        }
        else{
            c++;
        }
    }
    printf("%d",c);
}