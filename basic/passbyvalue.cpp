#include<iostream>
using namespace std;
	void swap(int,int);
	int main()
{

int a=10,b=20;
cout<<"value before swap:";
cout<<a<<b;
swap(a,b);
cout<<"value after swap:";
cout<<a<<b;
}
void swap(int i,int j)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
}
