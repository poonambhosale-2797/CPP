
#include <iostream>
using namespace std;

class student{
    public:
    int dispalyGrade()
    {
 int marks;
cout<<"enter the marks in range of 1 to 100 to find grade:";
cin>>marks;
 if(marks>=75)
 {
     cout<<"your grade="<<'A';
 }
 else if(marks<75&&marks>=55)
 {
    cout<<"your grade="<<'B';
 }
 else if(marks<55&& marks>35 )
 {
     cout<<"your grade="<<'C';
 }
 else
    {
    cout<<"fail";
    }
    }
};
int main()
{
 student s1;
 s1. dispalyGrade();
  return 0;
}
