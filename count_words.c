#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    //printf("%s
",s);
    int i,l,c=0;
    l=strlen(s);
    for(i=0;i<l;i++){
        if(i==0){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                c++;
                //printf("%d %c",c,s[i+1]);
            }
        }
        if(s[i]==' '){
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='A'||s[i+1]=='E'||s[i+1]=='I'||s[i+1]=='O'||s[i+1]=='U'){
                c++;
                //printf("%d %c",c,s[i+1]);
            }
        }
    }
    printf("%d",c);
}