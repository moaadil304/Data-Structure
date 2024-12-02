#include<stdio.h>
int linear_search(int arr[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
		return i;
	}
	return -1;
}
int main()
{
	int i;
	int arr[]={12,32,55,4,76,122};
	int item=76;
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=linear_search(arr,n,item);
	printf("Elements of the array :");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 printf("\n");
	{
		if(res==-1)
		printf("Item not found \n :");
		else
		{
			printf("Item found at index  %d \n",res);
		}
	}
	
}