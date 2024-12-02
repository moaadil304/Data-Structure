#include<stdio.h>
void insertion_sort(int arr[], int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void print(int arr[], int n)
{
    // printf("Enter the size of array :");
    for(int i=0; i<n; i++)
    {
         printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the  elements are in array :");
    
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

     printf("Before sorted : ");
     print(arr,n);
    
     insertion_sort(arr,n);

     printf("sorted array is :");
     print(arr,n);

}