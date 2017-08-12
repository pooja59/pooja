#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the value ");
scanf("%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("the large number is %d",a);
}
if(b>c)
{
printf("the large number is %d",b);
}
else
{
printf("the large number is %d",c);
}
return 0;
}
