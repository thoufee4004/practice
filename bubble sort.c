#include <stdio.h>

int main(){
	int a[50],i,j,n,temp;
	printf("enter the nomber of elemnts\t");
	scanf("%d",&n);
	printf("enter the %d elemnts\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	printf("finall the sorted elements are\n\n");
	for(i=0;i<n;i++)
			printf("%d\n",a[i]);
			return 0;
	}
