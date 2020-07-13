#include<iostream>
using namespace std;

class student
{
	int roll;
	char grade;
	float perc;
	public:void get();
	void show();
	
};
void student::get()
{
	cout<<"enter roll,grade,perc:";
	cin>>roll>>grade>>perc;
	
}
void student::show()
{
	cout<<"student detail"<<endl;
	cout<<roll<<grade<<perc;
	
}
int main()
{
	student s1;
	s1.get();
	s1.show();
	student s2;
	s2.get();
	s2.show();
	return 0;
}
