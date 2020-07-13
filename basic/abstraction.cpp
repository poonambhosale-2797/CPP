#include<iostream>
using namespace std;
class demo
{
	int A;
	int B;
	public:void showA();
	void showB();
	demo();
};
void demo::showA()
{
	cout<<A;
}
void demo::showB()
{
	cout<<B;
	
}
demo::demo()
{
	cout<<"enter A&B";
	cin>>A>>B;
}
int main()
{
	demo d1;
	d1.showA();
	demo d2;
	d2.showB();
	demo d3;
	d3.showA();
	d3.showB();
	return 0;
	
}



