#include<iostream>
using namespace std;
int main()
{
	int i,n,p,power;
	cout<<"enter a number:";
	cin>>n;
	cin>>p;
	for(int i=1;i<=p;i++)
	{
		power=power*n;
	}
	return 0;
}
