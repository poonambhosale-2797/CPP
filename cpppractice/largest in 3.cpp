#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a two number:"<<endl;
	cin>>a>>b>>c;
	if(a>=b&&a>=c)
	{
	cout<<"a is large"<<a<<endl;
}
	if(b>=a&&b>=c)
	{
	
	cout<<"b is large"<<b<<endl;
}
if(c>=a&&c>=b)
{
	cout<<"c is large"<<c<<endl;
}
	return 0;
	
}
