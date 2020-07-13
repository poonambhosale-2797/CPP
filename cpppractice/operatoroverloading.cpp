#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		counter()
		{
			a=0;
		}
		counter (int input);
		void operator ++();
		void show();
};
counter::counter(int input)
{
	a=input;
}
counter counter::operator ++()
{
	++a;
}
void counter::show()
{
	cout<<"a="<<a;
}
int main()
{
	counter c(10);
	++c;
	c.show();
	return 0;
}
