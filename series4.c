it also has some small errors

#include<stdio.h>
#include<math.h>
int find_number(int n);
int main()
{
int n;
scanf("%d", &n);
if(n<=30)
printf("%d",find_number(n));
return 0;
}
int find_number(int n)
{
if(n % 2 == 0)
{
int num = n/2;
int x = num-1;
int res = pow(3, x);
return res;
}
else
{
int num = (n+1)/2;
int x = num-1;
int res = pow(2, x);
return res;
}
}
