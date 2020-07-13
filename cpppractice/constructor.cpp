#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo();
		
		void show();
		
};
 demo::demo()
 {
 	cout<<"enter an interger:";
 	cin>>a;
 }
 void demo::show()
 {
 	cout<<a;
 }
 int main()
 {
 	demo d1;
 	d1.show();
 	return 0;
 }
