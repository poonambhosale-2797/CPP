#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo();
		demo(int);
		void show();
};
demo::demo()
{
	cout<<"enter an integer:";
	cin>>a;
}
 demo::demo(int i)
{
	a=i;
}
void demo::show()
{
	cout<<a;
}
int main()
{
	demo d1;
	demo d2(10);
	return 0;
}

