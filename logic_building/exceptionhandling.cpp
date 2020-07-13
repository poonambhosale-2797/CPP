//EXCEPTION HANDLING
#include<iostream>
using namespace std;
int main()
{
	int n,d,r;
	cout<<"enter numerator and denominator:"<<endl;
	
	cin>>n>>d;
	try
	{
		if(d==0)
		{
			throw d;
		}
		 r=n/d;//exception is happen here
	}
	catch(int ex)
	{
	cout<<"exception:divide by zero is not allowed"<<ex;	
	}
	
	cout<<"division is:"<<r;
	return 0;
}
