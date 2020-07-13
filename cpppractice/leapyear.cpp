#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a year:"<<endl;
	cin>>a;
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			cout<<a<<"leap year";
			else
			cout<<a<<"not leap";
			
				
			}
			else
			cout<<a<<"leap year";
		}
		else
		cout<<a<<"not leap";
	return 0;
}
