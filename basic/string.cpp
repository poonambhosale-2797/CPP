#include<iostream>
#include<string>
using namespace std;
class student
{
	int roll;
	char grade;
	float perc;
	string name;
	public:
	void get();
	void show();
	
};
void student::show()
{
	cout<<roll<<grade<<perc<<name;
	
}
void student::get()
{
	cout<<"enter roll,grade,perc,name";
	cin>>roll>>grade>>perc;
	getline(cin,name);

	
	getline(cin,name);
	
}
int main()
{
	student s1;
	s1.get();
	s1.show();
	
}
