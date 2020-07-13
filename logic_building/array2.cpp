//array
#include<iostream>
using namespace std;
int main()
{
	int a[3];
	int b[3];
	int add[3],sub[3],mul[3];
	
	cout<<"Enter  3 element for A:"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 3 element for B:"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>b[i];
	}
	cout<<endl<<"Addition a and b:"<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=a[i]+b[i];
		cout<<add[i]<<" ";
	}
	
	cout<<endl<<"Subtraction of a and b:"<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=a[i]-b[i];
		cout<<add[i]<<" ";
	}
	
	cout<<endl<<"Multiplication of a and b is:"<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=a[i]*b[i];
		cout<<add[i]<<" ";
	}
	return 0;
}
	
	

