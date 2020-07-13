#include<iostream>
using namespace  std;
class A
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"enter l ,b and h"<<endl;
			cin>>l>>b>>h;
		}
		void show() 
		{
			cout<<l<<b<<h<<endl;
		}
};
class B::public A
{
	string type;
		public:
			void set()
			{
				cout<<"enter material name"<<endl;
				cin>>type;
			}
			void display()
			{
				cout<<"material type"<<endl;
			}
};
int main()
{
	B obj;
	obj.get();
	obj.set();
	obj.show();
	obj.display();
	return 0;
}

		
