#include<stdio.h>
int main()
{
int year,a;
scanf("%d",&year);
printf("INPUT  \n %d \n", year);
printf("OUTPUT \n");
a=(year%4);
if(a==0)
printf("YES leap year");
else
printf("NO not leap year");
return 0;
}
