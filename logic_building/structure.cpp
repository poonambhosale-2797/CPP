//structure
#include<iostream>
using namespace std;
struct person
{
	char name[100];
	int age;
	double salary;
};
int main()
{
	person p1;
	cout<<"enter user detail"<<endl<<"enter user name:"<<endl;
	cin.getline(p1.name,100);
	cout<<"enter user age:"<<endl;
	cin>>p1.age;
	cout<<"enter user salary:"<<endl;
	cin>>p1.salary;
	cout<<"this is person detail those are follow:"<<endl;
	cout<<"person name:"<<p1.name<<endl;
	cout<<"person age:"<<p1.age<<endl;
	cout<<"person salary:"<<p1.salary<<endl;
	return 0;
}
