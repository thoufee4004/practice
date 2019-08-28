//Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5,
//between 2000 and 3200 (both included).
//The numbers obtained should be printed in a comma-separated sequence on a single line.
#include  <stdio.h>

int main()
{
int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%7==0)
        {
        	if(i%5!=0)
            printf("%d,\t",i);
        }
    }
}
