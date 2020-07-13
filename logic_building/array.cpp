//array
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter your array list:"<<endl;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"array is:"<<arr[i]<<endl;
	}
	return 0;
}
