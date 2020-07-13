#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10,temp;
	cout<<"number before swap:"<<endl;
	cout<<"a= "<<a<<"b= "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"number after swap:"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}
