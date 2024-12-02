 #include<stdio.h>


int main()
{
    int n,i;
    int arr[]={2,3,4,5,6,7};
    n=sizeof(arr)/sizeof(arr[0]);
      for(i=0;i<=n;i++)
     {
         printf("%d ",arr[i]);
         }
         return 0;

}