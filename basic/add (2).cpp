#include<iostream>
using namespace std;
class calc
{
	int a,b,c;
	public:
		int add(int input1,int input2);
		void show();
};
void calc::show()
{
	
}
 int calc::add(int i,int j)
{
	int add=i+j;
	return add;
}

int main()
{
	calc c1;
	int res=c1.add(105,67);
	cout<<"add is"<<res;
	return 0;
}
