#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int len,c=0,i,t;
    printf("Enter the String:");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
     {
        if(s[i]==' ')
        c++;
    }
    t=len-c;
    printf("%d",t);
}
