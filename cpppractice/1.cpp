#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,27,9,4,2};
	for(int i;i<=4;i++)
	{
		
		for(int j=0;j<4;j++)
		{
		if(arr[j]>arr[j+1])
		{
			int temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	return 0;
	
 } 
