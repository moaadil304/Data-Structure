//insert the element in th array
#include<stdio.h>
void input(int arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int i;
        printf("Enter the element :");
        scanf("%d",arr[i]);
    }
}
void insert(int arr[],int n,int size,int pos)
{
    int i;
    for(i=size;i<pos;i--)
    {
           arr[i]=arr[i-1]; 
    }
    arr[pos]=n;
}
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[50];
    int i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int size=6;
    int pos=4;
    input(arr,n);
    printArray(arr,n);
    insert(arr,n,size,pos);
    print(arr,n);
    return 0;
}