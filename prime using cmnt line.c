#include<stdio.h>
int main(int argc,char *argv[])
{
int N1,N2,i,j,sum=0,count,lower,upper;
scanf("%d%d",&N1,&N2);
N1=atoi(argv[1]);
lower=N1+1;
N2=atoi(argv[2]);
upper=N2;
for(i=lower;i<upper;i++)
{
count=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==1)
{
sum=sum+i;
}
}
printf("%d",sum); 
return 0; }
