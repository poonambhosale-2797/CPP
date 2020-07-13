#include<iostream>
using namespace std;
class car

{
	int lights;
	int breaks;
	int engine;
	int body;
	int milege;
	public:
		void showlights();
		void showbreaks();
		void showengine();
		void showbody();
		void showmilege();
		
};
void car::showlights()
{
	cout<<lights;
}
void car::showbreaks()
{
	cout<<breaks;
}
void car::showengine()
{
	cout<<engine;
}
void car::showmilege()
{
	cout<<milege;
	
}
	
	

