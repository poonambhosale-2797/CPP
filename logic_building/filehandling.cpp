//file handling
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"enter your age and name:"<<endl;
	cin>>arr;//only print poonam space n remaing is not counted
	///cin.getline(arr,100);
	fstream myfile("xyz.txt",ios::out|ios::app);//both r n w
	//ofstream myfile("xyz.txt",ios::app);//constructor calling n open..ate..end of file..out..op opearion 
	myfile<<arr;//insertion operator used
	myfile.close();
	//cout<<"operation is perform sucessfully:"<<endl<<endl;
	cout<<"operation is reading started:"<<endl<<endl;
	char arr1[100];
	ifstream obj("xyz.txt");
	obj.getline(arr1,100);
	cout<<"array content"<<arr1<<endl;
	cout<<" file read operation is perform sucessfully:"<<endl<<endl;

	obj.close();
	return 0;
}
