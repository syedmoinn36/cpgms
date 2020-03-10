#include<stdio.h>
void main()
{
int a,b,c;
printf("enter aq,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c)
printf("a\n");
else if (b>a&&b>c)
printf("b\n");
else
printf("c\n");
}
