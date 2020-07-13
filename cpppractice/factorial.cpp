#include<iostream>
using namespace std;
int main()
{
	int a,i,fact;
	cout<<"enter a number:";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}
