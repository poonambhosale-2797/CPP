//find the q and r:
#include<iostream>
using namespace std;
int main()
{
	int divisor,divident,remainder,quotient;
	cout<<"enter divisor:"<<endl;
	cin>>divisor;
	cout<<"enter divident:"<<endl;
	cin>>divident;
	remainder=divident%divisor;
	quotient=divident/divisor;
	cout<<"remainder is:"<<remainder<<endl;
	cout<<"quotient is:"<<quotient<<endl;
	return 0;
	
}
