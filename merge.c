#include <stdio.h>
int main() 
{
    int a[50],b[70],c[50],i,n,m,j;
    printf("enter the size of first array\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    j=i;
     printf("enter the size of second array\n");
    scanf("%d",&m);
    printf("enter the elements of the array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        c[j]=b[i];
        j++;
    }
    printf("merged array is,,,\n");
    for(i=0;i<n+m;i++)
    {
        printf("%d\t",c[i]);
    }
}
    
