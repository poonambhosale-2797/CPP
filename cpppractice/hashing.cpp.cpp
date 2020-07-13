#include<iostream>
using namespace std;

int a[100];
void hashing(int data)
{
    int pos=data%17;

    if(a[pos]==0)
    {
        a[pos]=data;
    }
    else
    {
        for(int i=(pos+1)%17;i!=pos;i=(i+1)%17)
        {
            if(a[i]==0)
            {
                a[i]=data;
                break;
            }
            if(i==pos)
            {
                cout<<"out of space "<<endl;
                break;
            }
        }
    }

}
void display()
{
    for(int i=0;i<5;i++)
    {

        cout<<a[i]<<"   ";
    }

}

void srch(int data)
{

    int pos=data%17;
   // int index;

    if(a[pos]==0)
        cout<<"The element is not there ";
    else if(a[pos]==data)
        cout<<"The element is found at index position : "<<pos+1;
    else
    for(int i=(pos+1)%17;i!=pos;i=(i+1)%17)
    {
        if(a[i]==data)
        {
            cout<<"element was found as index position ";
        }
        if(a[i]!=data)
        {
            cout<<"element not found";
            break;
        }
    }
}
int main()
{
     int counter=-1;
    int x,z;
    cout<<"Enter the element in array "<<endl;

    for(int i=0;i<5;i++)
    {

        cout<<"input : ";
        cin>>x;
        a[i]=x;
        hashing(x);

    }
    for(int i=0;i<5;i++)
    {
         counter=-1;
        for(int j=i;j<5;j++)
        {
            if(a[i]==a[j])
            {
                counter++;
                if(counter==1)
                {
                    cout<<"\nDublicate : "<<a[j]<<endl;
                }

            }

        }

    }
    //display();

        //cout<<"Enter the no to search : ";
       // cin>>z;
        srch(z);



    return 0;
}
