#include<iostream>
using namespace std;
class demo
{
	int id;
	char gender;
	float marks;
	public:
		void get();
		void display();
};
void demo::get()
{
	cout<<"enter a id,gender,marks:";
	cin>>id>>gender>>marks;
	
}
void demo::display()

{
	cout<<"enter a detail";
	cout<<id<<gender<<marks;
}
int main()
{
	demo s1;
	s1.get();
	s1.display();
	demo s2;
	s2.get();
	s2.display();
	
	return 0;
}
