#include <stdio.h>
int main() 
{
    int a[50],b[70],temp,i,n,m;
    printf("enter the size of first array\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array\n");
    scanf("%d",&m);
    printf("enter the elements of the array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("elements of the first array is..\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nelements of the second array is...\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);   
    }
}
