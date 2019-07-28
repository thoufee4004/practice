#include <stdio.h>

void main() 
{
int n,a,b=0,t;
clrscr();
scanf("%d",&n);
t=n;
while(n>0){
	a=n%10;
	b=b+a*a*a;
	n=n/10;
}
if(b==t)
{
 printf("amstrong number");
}
else
{
 printf("not amstrong number");
}
getch();
}
