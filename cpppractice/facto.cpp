#include<iostream>
using namespace std;
int main()
{
	int n,fact;
	cout<<"enter a number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}
