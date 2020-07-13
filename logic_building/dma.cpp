//dynamic memory allocation
#include<iostream>
using namespace std;
int  main()
{
	int size;
	int *ptr;
	
	cout<<"Enter number of value to store (size of array):"<<endl;
	cin>>size;
	
	ptr=new int[size];
	
	cout<<"enter value to be store in the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"enter value of the  array"<<endl;
	for(int i=0;i<size;i++)
	{
	 cout<<ptr[i]<<endl;
	}
	return 0;
}
