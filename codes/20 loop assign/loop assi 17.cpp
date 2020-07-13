#include<iostream>
using namespace std;
int main()
{
	int arr[10],min;
	int num;
	cout<<"Enter 10 num:";
	cin>>num;
	for(int i=0 ;i<10;i++)
	{
		cin>>arr[i];
      }
      min=arr[0];
  for(int i=1;i<10;i++)
  {
   
   
		
		if(arr[i]<min)
		{
			
			min=arr[i];
		}
	
}

	cout<<min;
	
	
	
}
