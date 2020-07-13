#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
struct node
{
	string product;
	double quantity;
	double price;
	double discount;
	double cost;
	double amount;
	struct node * next;
	struct node * pre;
};

struct node * head=NULL,* temp=NULL,*tempdel=NULL,*temptrvl=NULL;
static int count;
string name;
time_t t=time(NULL);

void createnode()
{
	int no,qyt,pr,dis;
	struct node*newnode=new node();
	count++;
	
	if(count==1)
 		{
			cout<<"\n\t\tEnter NAME :- ";
			cin.ignore();
			getline(cin,name);	
		}
			
	cout<<"\n\n\n\t\tAvailable item with us : ";
	cout<<"\n\n\t\t1=O-OIL\t2=SUGAR\t 3=RICE\t  4=WHEAT  5=CAKE  6=WINE  7=MEAT  8=SALT\n"<<endl;
	cout<<"\t\t9=CREAM  10=SAUSE  11=CURD  12=BREAD  13=MILK  14=FISH  15=ATTA\n"<<endl;
	cout<<"\n\t\tYour Enter Item is :- ";
	cin>>no;
	switch(no)
	{
		case 1:
				cout<<"\n\n\tEnter quantity in Liter :- L. ";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="O-OIL";
				dis=newnode->discount=15;
				pr=newnode->price=120;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 2:
				cout<<"\n\tEnter Quantity in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="SUGAR";
				dis=newnode->discount=30;
				pr=newnode->price=70;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 3:	
				cout<<"\n\tEnter Quantity in Kg :- Kg. ";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="RICE";
				dis=newnode->discount=12.33;
				pr=newnode->price=85;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;	
		case 4:	
				cout<<"\n\tEnter Quantity in Kg :- Kg. ";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="WHEAT";
				dis=newnode->discount=13;
				pr=newnode->price=62;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;	
		case 5:
				cout<<"\n\tEnter Quantity of CAKE Per piece:- p/p .";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="CAKE";
				dis=newnode->discount=5;
				pr=newnode->price=20;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;	
		case 6:
				cout<<"\n\tEnter Quantity Of Bottel :- ";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="WINE";
				dis=newnode->discount=14.4;
				pr=newnode->price=130;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 7:
				cout<<"\n\tEnter Quantity of MEAT in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="MEAT";
				dis=newnode->discount=5;
				pr=newnode->price=450;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 8:
				cout<<"\n\tEnter Quantity of SALT in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="SALT";
				dis=newnode->discount=10;
				pr=newnode->price=30;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;		
		case 9:
				cout<<"\n\tEnter Quantity Of CREAM In Packet :- Pac.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="CREAM";
				dis=newnode->discount=17;
				pr=newnode->price=55;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 10:
				cout<<"\n\tEnter Bottel oF SAUSE :- L.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="SAUSE";
				dis=newnode->discount=25;
				pr=newnode->price=68;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 11:
				cout<<"\n\tEnter Quantity Of CURD in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="CURD";
				dis=newnode->discount=5;
				pr=newnode->price=90;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 12:
				cout<<"\n\tEnter Quantity Of BREAD in Pack :- PacK.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="BREAD";
				dis=newnode->discount=19;
				pr=newnode->price=40;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 13:
				cout<<"\n\tEnter Quantity Of MILK in LIT :- L.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="MILK";
				dis=newnode->discount=7;
				pr=newnode->price=40;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 14:
				cout<<"\n\tEnter Quantity OF FISH in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="FISH";
				dis=newnode->discount=17.8;
				pr=newnode->price=350;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		case 15:
				cout<<"\n\tEnter Quantity Of ATTA in Kg :- Kg.";
				cin>>newnode->quantity;
				qyt=newnode->quantity;
				newnode->product="ATTA";
				dis=newnode->discount=14;
				pr=newnode->price=170;
				newnode->cost=qyt*pr;
				newnode->amount=((100-dis)*qyt*pr)/100;
				break;
		default:
				break;
	}
	
	if(head==NULL)
		{
			head=temp=newnode;
		}
	else
		{
			temp->next=newnode;
			newnode->pre=temp;
			temp=newnode;
		}	
}
void deletenode(int position)
{
	tempdel=head;
	if(position==1)
	{
		head=head->next;
		free(tempdel);
	}
	else if(position==count)
	{
			for(int i=1;i<position;i++)
				{
					tempdel=tempdel->next;
				}
				tempdel->pre->next=NULL;
				free(tempdel);	
	}
	else
	{
			for(int i=1;i<position;i++)
				{
		tempdel=tempdel->next;
				}	
		tempdel->pre->next=tempdel->next;
		tempdel->next->pre=tempdel->pre;
		free(tempdel);
	}
	count--;

}
void newbill()
{
	count=0;
	tempdel=head;
	while(tempdel!=NULL)
	{
		head=tempdel;
		tempdel=tempdel->next;
		free(head);
	}
	head=temp=NULL;
}

int travel()
{
	system("cls");
	int tempcount=1;
	temptrvl=head;
	cout<<"\n\t\t ***********************";
	cout<<"\n\t\t ***********************";
    cout<<"\n\t\t                             BILL DETAILS  			                ";
    cout<<"\n\t\t      			   WELCOME TEAM 7 - THE ELITE         		      \n";
    cout<<"\t\t  ----------------------------------------------------------------"<<endl;
    cout<<"\n\t\t NAME : "<<name<<"                         CONTACT : 022-2445-999\n";
    cout<<"\n\t\t GST: 07AAECR2971C1Z              "<<"DATE: "<<ctime(&t)<<"   \n";
	cout<<"\t\t ***********************"<<endl;
	cout<<"\t\t ***********************"<<endl;
	cout<<"\n\n\t\t NO. \tNAME   Quantity\tPrice\tCost\tDiscount\tAmount\n"<<endl;
	cout<<"\n\t\t  ----------------------------------------------------------------"<<endl;
	while(temptrvl!=NULL)
	{
		cout<<"\t\t "<<tempcount<<"\t"<<temptrvl->product<<"  \t"<<temptrvl->quantity<<"\t"<<temptrvl->price<<"\t"<<temptrvl->cost<<"\t"<<temptrvl->discount<<" %\t\t"<<temptrvl->amount<<" \\-"<<endl;
		temptrvl=temptrvl->next;
		tempcount++;
	}
	cout<<"\n\t\t  ***********************"<<endl;
	temptrvl=head;
	float TotalCost=0,TotalAmount=0,cs,amt,null;
	while(temptrvl!=NULL)
	{
		cs=temptrvl->cost;
		amt=temptrvl->amount;
		TotalCost=TotalCost+cs;
		TotalAmount=TotalAmount+amt;
		temptrvl=temptrvl->next;
	}
	cout<<"\t\t\tTotal\t\t\t"<<TotalCost<<"\t\t\t"<<TotalAmount<<"   Save "<<TotalCost-TotalAmount<<endl;;
		cout<<"\n\t\t\t                   THANK YOU                  \n";
		cout<<"\t\t\t                  VISIT AGAIN                 \n\n";
		cout<<"\n\t\t\t               PAYABLE AMOUNT = Rs. "<<TotalAmount<<endl<<endl;
		
		return TotalAmount;
		
}

int main()
{
	int pos,n;
	
	while(1)
	{
		system("cls");
		cout<<"\n\t\t      			       WELCOME  TEAM 7 - THE ELITE         		      \n";
		cout<<"\n\t\t      			     (Billing System Of SuperMarket)        		      \n";
  		cout<<"\n\t\t  ***************************"<<endl;
		cout<<"\n\n\t\t1=ADD ITEM\t2=DELETE ITEM  \t3=BILL DETAILS\t\t4=NEW USER\t\t5=Exit"<<endl;
		cout<<"\n\n\t\tYour Enter Request is :-     ";
		cin>>n;
		switch(n)
		{
			case 1:	
					createnode();
					break;
			case 2:
					system("cls");
					cout<<"\n\t\t  *******Check Position to Delete*******"<<endl;
					travel();
					cout<<"\t\t\tEnter Position of Item :- ";
					cin>>pos;
					deletenode(pos);
					break;
			case 3:
				{
					int t=0;
					pos=travel();
					cout<<"\t\tPress 1 = Cash\t\t2 = Credit Card\t\t3 = Exit  ";
					cin>>t;
					if(t==1)
					{	
						cout<<"\t\tEnter Cash Given by Customer :- Rs.";
						cin>>t;
						cout<<"\t\tChange for Rs."<<t<<"  is :-  Rs."<<t-pos<<endl;
					}
					else if(t==2)
					{
						pos=(0.95)*pos;
						cout<<"\n\t\tAdditional 5% disscount : \n";
						cout<<"\t\tTotal Payable Amount is :-  Rs."<<pos<<endl;
					}
					else
					{
						break;
					}
					cout<<"\n\t\t\t                 PRESS 0 For Main Menu  : -   ";
					cin>>t;	
					break;
				}
				
			case 4:
					system("cls");
					newbill();
					break;
			case 5:
					return 0;
					exit;
					break;
			default:
					break;
		}
	}
}
