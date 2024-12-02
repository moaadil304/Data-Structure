#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("Enter the range :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            printf("Enter the elemet :");
            scanf("%d",&a[i]);
    }
    printf("Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}