#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		void get(int input);
		void show();
		
		
};
void demo::get(int i)
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
	d1.get(10);
	d1.show();
	return 0;
}
