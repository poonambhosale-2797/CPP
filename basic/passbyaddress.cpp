#include<iostream>
using namespace std;
	void swap(int*,int*);
	int main()
{

int a=10,b=20;
cout<<"value before swap:";
cout<<a<<b;
swap(&a,&b);

cout<<"value after swap:";
cout<<a<<b;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
