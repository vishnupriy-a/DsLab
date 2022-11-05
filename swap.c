#include <stdio.h>
int main() 
{
    int a[50],i,n,temp;
    printf("enter the even number as size\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are,,,\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nswapped array is..");
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}

