#include<iostream>
using namespace std;
class fabonasi{
	
	int a=0,b=1,fab;
	int num;
	public:
	void getnum()
	{
		cout<<"Enter the num";
		cin>>num;
		cout<<a<<b;
	}
	int CalculateFab()
	{
		int i;
		for(i=2;i<num;i++)
		{
			fab=a+b;
			a=b;
			b=fab;
	     cout<<fab<<endl;
		}
		
	}
	void PrintFab()
	{
		
		//cout<<fab<<endl;
	}
	
};
int main()
{ 
fabonasi f1;
f1.getnum();
f1.CalculateFab();
f1.PrintFab();
}8
 
