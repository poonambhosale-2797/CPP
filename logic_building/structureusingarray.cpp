//structure using array
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
	person p[100];
	cout<<"Enter user detail like:name,age,salary:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter user detail"<<(i+1)<<endl;
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Enter user detail"<<(i+1)<<endl;
		cout<<"person name:"<<p[i].name<<endl;
		cout<<"person age:"<<p[i].age<<endl;
		cout<<"person salary:"<<p[i].salary<<endl;
	}
	return 0;
}
