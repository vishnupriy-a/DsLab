#include<stdio.h>
void main()
{
	int a[100],b[50],n,i;
	printf("Enter the size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array elements are::");
	for(i=0;i<n;i++)
		{ 
			scanf("%d\t",&a[i]);
		}
	for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
				{
					b[i]=1;
				}
			else
				{
					b[i]=0;
				}
		}
	printf("\n Bitstring of even elements:\n");
	for(i=0;i<n;i++)
		{
			printf("%d\t",b[i]);
		}
}
			
		