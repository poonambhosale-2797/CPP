#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int i,j,a,num;
	
	
	cout<<"enter array size :"<<endl;
	cin>>a;
	int arr[a];
	cout<<"enter array element:"<<endl;
	
	for(i=0;i<=a;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"array elemrnt are:"<<endl;
	for( i=0;i<=a;i++)
	{
	
		cout<<arr[i]<<endl;
	}
	cout<<"enter many number you wants to add:";
	cin>>num;
	for(i=0;i<=num;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"addition is"<<sum<<endl;
	return 0;
}
