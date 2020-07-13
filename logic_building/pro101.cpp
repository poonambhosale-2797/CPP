//leap year
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a year:";
	cin>>a;
	if(a % 4==0)
	{
		if(a % 100==0)
		{
			if(a % 400==0)
			{
				cout<<a<<"year is leap";
				else
				cout<<a<<"year is not leep";
			}
			else
			cout<<a<<"year is leap";
		}
		else
		cout<<a<<"year is not leep";
	}
	return 0;
}
