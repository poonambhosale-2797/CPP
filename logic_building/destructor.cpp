// destructor 
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
	//default constructor
	cars(){
		cout<<"default constructor called:"<<endl;
	}
	//parameterized constructor
	cars(string cname,string mname,string fname,float m,double p){
	    company_name=cname;
		model_name=mname;
        fule_type=fname;
        mileage=m;
        price=p;
        } 
	
	//copy constructor
	cars(cars &obj){
	    company_name=obj.company_name;
		model_name=obj.model_name;
        fule_type=obj.fule_type;
        mileage=obj.mileage;
        price=obj.price;
        } 
	
		void setdata(string cname,string mname,string fname,float m,double p){//return tupe, function name
        
        company_name=cname;
        model_name=mname;
        fule_type=fname;
        mileage=m;
        price=p;
}
     ~cars(){
     	cout<<"destructor called"<<endl;
	 }
        void display()
		{
		cout<<"<<<<<<<<<<car detail>>>>>>>>>>"<<endl;
		cout<<"company name:"<<company_name<<endl;
		cout<<"model name:"<<model_name<<endl;
		cout<<"fule type:"<<fule_type<<endl;
		cout<<"mileage of car is:"<<mileage<<endl;
		cout<<"price of car is:"<<price<<endl;
		}
        };

int main()
{
    cars car1,car3("poo","altis","petrol",75.5,26000);
     car1.setdata("toyota","altis","disel",15,5048965);
     cars car2=car1;//copy constructor
     car1.display();
     car2.display();
     car3.display();
     return 0;
}
