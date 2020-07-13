#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	public:
		void get(int input1,int input2);
		void show();
};
void demo::get(int i,int j)
{
	cout<<"enter a number:";
	cin>>a>>b;
	
}
void demo::show()
{
	c=a+b;
	cout<<"addtion is:"<<c;
	
}
int main()
{
	demo d1;
	int a,b,c;
	cout<<"enter a number:";
	cin>>a>>b;
	c=a+b;
	cout<<"addition is"<<c;
	d1.get(10,20);
	d1.show();
	return 0;
}
