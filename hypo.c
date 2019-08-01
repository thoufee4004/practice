#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float c=0;
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("perfect triangle\n");
        c=sqrt((a*a)+(b*b));
    }
    else
    printf("not perfect triangle\n");
    c=sqrt((a*a)+(b*b));
    printf("%0.2f",c);
    return 0;
        
        
}
