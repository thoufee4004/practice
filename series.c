//5)	Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
//This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.
//The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT. Other than value of n th term,no other character / string or message should be written to STDOUT. For example , if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.
//You can assume that N will not exceed 30

#include<stdio.h>
#include<math.h>
int main(){
    int e,n,p,i,ans=0;
    scanf("%d",&n);
    e=n%2;
    if(e==1){
    for(i=0;i<n/2+1;i++)
    {
         ans=pow(2,i);
    
    }}

    else if(e!=1)
    {
        ///p=p+1;
        for(i=0;i<n/2;i++)
    {
         ans=pow(3,i);
    }}
    printf("%d",ans);
}
   
