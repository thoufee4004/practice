#include<stdio.h>
#include<math.h>
int main()
{
    int n,num1,num2,num3,num4,num5,rev_a;
    scanf("%d",&n);
    num1=(n/10000);
    num2=(n%10000)/1000;
    num3=(n%1000)/100;
    num4=(n%100)/10;
    num5=(n%10);
    rev_a=num5*10000+num4*1000+num3*100+num2*10+num1;
    printf("reverse of the number is %d",rev_a);
    return 0;    
        
}
