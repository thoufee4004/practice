//Write a code to check whether no is prime or not.
//Condition use function check() to find whether entered no
//is positive or negative ,if negative then enter the no, And
//if yes pas no as a parameter to prime() and check whether no is prime or not?
#include<stdio.h>
#include<math.h>
void check(int);
void prime(int);
int main(){
    int n;
    scanf("%d",&n);
    check(n);
    
}
void check(int a)
{
    if(a<0)
    printf("negative number");
    else
    prime(a);
}
void prime(int n)
{
    int count;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    }
