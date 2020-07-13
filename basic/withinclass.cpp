#include<iostream>
using namespace std;
class demo
{ int a;
	public:void get( int input);
	void show();
	
};
void demo::show()
{
	cout<<a;
	
}
void demo::get(int i)
{
	a=i;
	
}
int main()
{
	demo D1;
	D1.get(10);
	D1.show();
	return 0;
}
