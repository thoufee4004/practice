#include  <stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    printf("the factors of %d\n ",num);
    for(i=1;i<=num-1;i++)
    {
        if(num%i==0)
            printf("%d,\t",i);
    }
    printf("%d",num);
}
