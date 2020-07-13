#include<iostream>
using namespace std;
class cal
{
	int a,b,c;
	public:int sum ( int input1,int input2 );
	void show();
};
void cal::show()
{
	c=a+b;
}
int cal::sum(int i,int j)
{
	int sum=i+j;
	return sum;
	
}
int main()
{
	cal c1;
	int res =c1.sum(10,20);
	cout<<"sum is" <<res;
	return 0;
		
}
