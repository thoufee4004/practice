#include<stdio.h>
#include<stdlib.h>
int main()
//int main(int argc, char *argv[])
{
//if(argc==1)
//{
//printf("No arguments");
//return 0;
//}
//else
{
int n;
n=atoi(argv[1]);
float i=0.00;
while(i*i<=n)
{
i=i+0.001;
}
i=i-0.001;
printf("%.2f",i);
}
}
