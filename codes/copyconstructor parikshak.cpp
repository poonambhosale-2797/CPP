#include<iostream>
using namespace std;
class rectangle
{
	private:
		float length;
		float width;
		public:
			void setLength(float len)
			{
				length=len;
			}
			void setWidth(float wid)
			{
				width=wid;
			}
			float perimeter()
			{
				int p;
				p=(2*length+2*width);
				return p;
			}
			float area()
			{
				int a;
				a=length*width;
				return a;
				
			}
			void show()
			{
				cout<<"length:  "<<length<<"  width: "<<width<<endl;
				
			}
			int sameArea(rectangle newrect)
			{
				float area_first=length*width;
				float area_second=newrect.length*newrect.width;
				if(area_first==area_second)
				{
					return 1;
					
				}
				else
				{
				return 0;	
				}
			}
};
int main()
{
	rectangle first;
	rectangle second;
	first.setLength(5);
	first.setWidth(2.5);
	second.setLength(5);
	second.setWidth(18.9);
	
	
	cout<<endl<<"1st rectangle:  ";
	first.show();
	cout<<"area:  ";
	cout<<first.area();
	cout<<endl<<"perimeter:   ";
	cout<<first.perimeter()<<endl;
	
	cout<<endl<<"2nd rectangle:  ";
	second.show();
	cout<<"area:  ";
	cout<<second.area();
	cout<<endl<<"perimeter:   ";
	cout<<second.perimeter()<<endl;
	
	return 0;
}
	
	
	
	

