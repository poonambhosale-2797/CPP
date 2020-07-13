#include<iostream>
using namespace std;
int main()
{
	int no,n;
	cin>>no;
	for( int i=1;i<=no/2;i++)
	{
		n=no%i;
	}
	if(n==2)
	{
	
	cout<<"prime";
}
	else
	{
	
	cout<<"not prime";
}
	return 0;
}
