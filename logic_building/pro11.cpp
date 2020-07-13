//factorial number:
#include<iostream>
using namespace std;
int main()
/*{
	int a,fact;
	cout<<"enter a number:";
	cin>>a;
	fact=a;
while(a>1)
	{
		a--;
		fact=fact*a;
	}
	cout<<"factorial is:"<<fact;
	return 0;
}*/
{
	int i,a,fact=1;
	cout<<"enter a number:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
cout<<"factorial of given number is:"<<" "<<fact;
return 0;
}
