#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,i;
	
	for(i=0;i<=15;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c<100)
		{
			cout<<c<<endl;
		}
	}
	return 0;
}
