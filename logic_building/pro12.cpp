//palimdrome
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter a number:"<<endl;
	int n,num,digit,rev;
	cin>>num;
	while(num!=0)
	{
		digit=digit%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	if(n==rev)
	{
		cout<<"palimdorom"<<endl;
	}
	else
	{
		cout<<"non palimdrome"<<endl;
	}
	return 0;
}
