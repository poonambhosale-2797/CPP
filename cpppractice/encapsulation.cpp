#include<iostream>
using namespace std;
class demo
{
	int id;
	float percentage;
	char grade;
	public:
		void get();
		void show();
};
void demo::get()
{
	cout<<"enter id,per,grade:";
	cin>>id>>percentage>>grade;
	
}
void demo::show()
{
	cout<<"student details"<<endl;
	cout<<id<<percentage<<grade<<endl;
}
int main()
{
	demo s1;
	s1.get();
	s1.show();
	return 0;
}
