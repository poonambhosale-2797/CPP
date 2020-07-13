#include<iostream>
using namespace std;
int main()
{
int num,rem,rev=0,n;
	cout<<"Enter the num";
	cin>>num;
	n=num;
	while(num!=0)
	{
	  rem=num%10;
	  rev=rev*10+rem;
	  num=num/10;	
	}
	if(n==rev)
	{
	cout<<"it is palindrome num="<<rev;	
	}

	else
	{
		cout<<"not palindrome num="<<rev;
	}
}
