#include<iostream>
using namespace std;
class student
{
	int roll;
	char grade;
	float per;
	public:
		void get();
		void show();
};
void student::get()
{
	cout<<"enter roll,grade,per:";
	cin>>roll>>grade>>per;
	
}
void student::show()
{
	cout<<"student details"<<endl;
	cout<<"roll<<grade<<per";
	
}
int main()
{
	student d1;
	d1.get();
	d1.show();
	student d2;
	d2.get();
	d2.show();
	return 0;
}
