#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter a number:";
	cin>>n;
	bool Isprime=true;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			Isprime=false;
			break;
		}
	}
	if(Isprime)
	cout<<"prime number:";
	else
	cout<<"not prime number:";
	return 0;
}
