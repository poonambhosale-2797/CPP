#include<iostream>
using namespace std;
class demo
{
	int a;
	
	public:
		demo()
		{
			a=0;
			
		}
		demo(int input)
		{
			a=input;
		}
		void show()
		{
			cout<<"a="<<a;
		}
};
int main()
{
	demo d1;
	d1.show();
	int user_input;
	cout<<"enter an no.";
	cin>>user_input;
	demo d2(user_input);
	d2.show();
	return 0;
}
