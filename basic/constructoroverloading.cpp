#include<iostream>
#include<string>
using namespace std;
class demo
{
int a;
public:demo(int);
demo ();
void show();

	
};
void demo::show()
{
	cout<<a;
}
demo::demo(int i)
{
	a=i;
}
demo::demo()
{
	cout<<"enter an int";
	cin>>a;
}
int main()
{
	demo d1(10);
	d1.show();
	demo d2(10);
	d2.show();
	return 0;
}
