#include<stdio.h>
#include<string.h>
int main()
{
int arr[100],n,temp,j,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n/2;i++)
 {
     if(arr[i]>arr[i+1])
     {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
     }
 }
 for(j=n-1;j>n/2;j--)
 {
     if(arr[j]<arr[j+1])
     {
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
     }
 }
 for(i=0;i<n;i++)
 {
     printf("%d ",arr[i]);
 }

return 0;
}
