#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size=";
	cin>>size;
	int *p;
	p=new int[size];
	for(int i=0;i<size;i++)
	{
		cout<<"enter an element:";
		cin>>p[i];
		
	}
	cout<<"array element are:";
	for(int j=0;j<size;j++)
	{
		cout<<p[j];
		
	}
	return 0;
}
