#include<iostream>
using namespace std;
class Amostrong
{
	int num;
	int ans,ans1=0,rem,n;
	public:
	void get()
	{
		cout<<"Enter num";
		cin>>num;
	}
	void calculate()
	{
		n=num;
		while(num!=0)
		{
			rem=num%10;
			ans=rem*rem*rem;
			ans1=ans1+ans;
			num=num/10;
		}
		
	}
	void print()
	{
		if(n==ans1)
		{
			cout<<"Amstrong num";
		}
		else
		{
			cout<<"not amstrong num";
		}
	}
	
};
int main()
{
	Amostrong a1;
    a1.get();
    a1.calculate();
    a1.print();
}
