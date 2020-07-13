#include<iostream>
using namespace std;
class beta;
class alpha

{
	int a;
	public:
		void show()
	{
		cout<<a;
	}
	friend void compare(alpha,beta);
	
};
class beta
{
	int b;
	public:void display()
	{
		cout<<b;
		
	}
	friend void compare(alpha,beta);
};
void compare(alpha obj1,beta obj2)
{
	int alpha_1=obj_a;
	int beta_2=obj_b;
	if(alpha_a==beta_a)
	{
		cout<<"alpha & beta equal";
		
	}
	else{
		cout<<"alpha & beta is not equal";
	}
}
int main()
{
	alpha.obj1;
	beta.obj2;
	compare(obj1,obj);
	return 0;
	
}
