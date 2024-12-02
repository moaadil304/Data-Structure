#include <stdio.h>
void print(int arr[],int  size)
{
    
    for( int i=0;i< size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    void bubble_sort(int arr[],int size);
    {
        int i,j,temp;
        for(i=0; i<size; i++)
        {
            for(j=i+1; j<size; j++)
            {
                if(arr[j]<arr[i])
                {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            } 
        }
    }
}
int main()
{
    int arr[] = {12,13,4,6,14,10,1,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print(arr,n);

}