 //	Find the 15th term of the series?
   //      0,0,7,6,14,12,21,18, 28
#include<stdio.h>
#include<math.h>
int main(){
        int e,n,p,i,ans=0;
    scanf("%d",&n);
    e=n%2;
    if(e==1){
    for(i=0;i<n/2+1;i++)
    {
         ans=7*i;
    
    }}

    else if(e!=1)
    {
        ///p=p+1;
        for(i=0;i<n/2;i++)
    {
         ans=6*i;
    }}
    printf("%d",ans);
}
