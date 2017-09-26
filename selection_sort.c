#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("\nEnter size:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter integers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			  if(a[i]>a[j])
			  {
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
			
	
		
	
