//pointer to obj & passing obj as arg in function & returning obj
///complex number having real and imagiary part
//comp1=complex real->5+6i<-imaginery<-}this 2 has pass obj as arg//1
// comp2=5-6i<-}this 2 has pass obj as arg//2
//addition of 2 obj ->com3=(5+5)+(6i+(-6i))
#include<iostream>
using namespace std;
class ComplexNumber
{
	private:
		//data member or member variable
		int real;
		float imaginery;
		public:
			ComplexNumber()//default constructor
			{
				
			}
		ComplexNumber(int r,float i)//paramerterized constructor
		{
			real=r;
			imaginery=i;
			}	
		 void display()
		 {
		 	cout<<"ComplexNumber is:"<<real<<"+"<<imaginery<<"i"<<endl<<endl;
		 }
	int	 getrealpart()
	{
		return real;
	}
	float getimaginerypart()
	{
		return imaginery;
	}
	
};
ComplexNumber add2no(ComplexNumber n1,ComplexNumber n2){     //return type ComplexNumber& n add2no is function
	int r;
	float i;
	r=n1.getrealpart() + n2.getrealpart();
	i=n1.getimaginerypart() + n2.getimaginerypart();
	ComplexNumber temp(r,i);
	return temp;
}

int main()
{
	ComplexNumber comp1(5,4),comp2(2,4),comp3;
	comp1.display();
	comp2.display();
	cout<<"addition od comp1 and comp2 is:"<<endl;
	comp3=add2no(comp1,comp2);
	comp3.display();
	
	cout<<"pointer to object"<<endl<<endl;
	ComplexNumber *ptr1;
	ptr1=&comp3;
	ptr1->display();
	ptr1=&comp2;
	ptr1->display();
	cout<<ptr1;
	
	return 0;
}

