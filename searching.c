#include <stdio.h>
int main() 
{
    int a[50],i,x,n,f=-1;
    printf("enter the size of the array:\n");
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
    printf("\nenter the element to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            f=a[i];
        }
    }
    if(f>=0)
    {
    printf("%d present in the array",f);
    }
    else
    {
        printf("\n Not present\n");
    }
}

