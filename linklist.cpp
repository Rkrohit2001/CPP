#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
void createlist(int n);
void display();
void add(int i);
struct node
{
	int data;
	struct node *next;
}*start;


main()
{
	int n,m,choice;
	//start=NULL;
	while(1)
	{
		cout<<"1.create List\n 2.display\n3.Add begining\n4. Exit\n";
		cout<<"enter your option\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			    cout<<"enter list size insert\n";
			    cin>>n;
			    cout<<"enter your "<<n<<" number in your link list-";
			    for(int i=1;i<=n;i++)
			    {
			    	cin>>m;
			    	createlist(m);
				}
			    break;
			case 2:
				  display();
				  break;
			case 3:
				 cout<<"enter your number \n";
				 cin>>m;
				 add(m);
				 break;
			case 4:
				 exit(0);
			default:
				  cout<<"invalid option\n";
				  
		}
	}
}
void createlist(int n)
{
	struct node *q,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	//q=start;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		q->data=temp->data;
		while(q->next==NULL)
		{
			q->data=temp->data;
		}
		q->next=temp->next;
	}
}
void display()
{
	struct node *q;
	if(start==NULL)
	{
		cout<<"list is empty\n";
	}
	else
	{
		q=start;
		while(q->next==NULL)
		{
			cout<<q->data;
			q=q->next;
		}
		cout<<"\n";
	}
}
void add(int i)
{
	struct node *q,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=i;
	q=start;
	temp->next=temp;
}
