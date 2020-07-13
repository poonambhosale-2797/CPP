#include<iostream>
using namespace std;
int main()
{
	int n,revnumber=0,rem;
	cout<<"enter a number:";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		revnumber=(revnumber*10)+rem;
		n=n/10;
	}
	cout<<"revrsed number is"<<revnumber<<endl;
	return 0;
}
