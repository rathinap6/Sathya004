#include<stdio.h>
void main()
{
   int a,b,c,d;
   printf("Enter the numbers:");
   scanf("%d%d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("The Numbers after swap are :%d %d",a,b);
   
}
