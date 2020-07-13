#include<iostream>
using namespace std;
class emp
{
	int id;
	string name;
	float sal;
	public:void get();
	void show();
	
};
void emp::get()
{
	cout<<"enter id,name,sal:";
	cin>>id>>name>>sal;
}
void emp::show()
{
	cout<<"employee i="<<id;
	cout<<"employee name="<<name;
	cout<<"employee sal="<<sal;
}
int main()
{
	emp *p;
	p=new emp();
	p->get();
	p->show();
	return 0;
}
