#include<iostream>
using namespace std;
class staticdemo{
	static int a;
	public:
		void display()
		{
			cout<<a;
			
		}
};
int staticdemo::a;
int main()
{
	staticdemo d1;
	d1.display();
	return 0;
	}

