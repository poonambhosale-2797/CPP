//constructor & destructor
#include<iostream>
#include<string>
using namespace std;
class cars{
	private:
		//data member or member variable
	string company_name;
	string model_name;
	string fule_type;
	float mileage;
	double price;
	public://dislay data..member function
	

		void setdata(string cname,string mname,string fname,float m,double p){//return tupe, function name
        
        company_name=cname;
        model_name=mname;
        fule_type=fname;
        mileage=m;
        price=p;
}
        void display()
		{
		cout<<"car detail"<<endl;
		cout<<"company name:"<<company_name<<endl;
		cout<<"model name:"<<model_name<<endl;
		cout<<"fule type:"<<fule_type<<endl;
		cout<<"mileage of car is:"<<mileage<<endl;
		cout<<"price of car is:"<<price<<endl;
		
		
		}
        };

int main()
{
    cars car1;//obj
     
     car1.display();
     
	 	
	return 0;
}
