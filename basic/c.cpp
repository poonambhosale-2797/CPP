#include<iostream>
using namespace std;
class demo
{
	private:
		int a;
		public:
			void get();
			void show();
			
	
};
void demo::get()
{
	cout<<"enter an int";
	cin>>a;
	
}
void demo::show()
{
	cout<<a<<endl;
	
}
int main()
{
	demo obj1;
	obj1.get();
	obj1.show();
}

