//structure using pointer
#include<iostream>
#include<string>
using namespace std;
struct person
{
	string name;
	int age;
	double salary;
};
int main()
{
	person p;
	person *ptr=&p;

	cout<<"Enter user detail"<<endl;
	
		cin>>ptr->name;
		cin>>ptr->age;
		cin>>ptr->salary;

    cout<<"person name:"<<ptr->name<<endl;
	cout<<"person age:"<<ptr->age<<endl;
	cout<<"person salary:"<<ptr->salary<<endl;
	return 0;
}
