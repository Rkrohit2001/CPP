#include<iostream>
using namespace std;
int stack[50],top=-1,n,choice=0;
void push();
void pop();
void show();
	
main()
{
	cout<<"enter your numer of element\n";
	cin>>n;

	cout<<"stack operation\n";
	while(choice!=4)
	{
		cout<<"\n1.push\n 2.pop\n 3.display\n 4.exit\n";
		cout<<"enter your option \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				 show();
				 break;
			case 4:
				 exit(0);
			default:
				  cout<<"invalid option\n";
				  
		}
	}
	
}
void push()
{
	int val;
	if(top==n)
	{
		cout<<"stack is overflow\n";
		
	}
	else

	{
		cout<<"enter your number \n";
		cin>>val;
		top=top+1;
		stack[top]=val;
		
	}   
}
void pop()
{
	if(top==-1)
	{
		cout<<"stack is underflow\n";
		
	}
	else
	{
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		cout<<"stack is empty\n";	
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			cout<<"\t"<<stack[i]<<"\t";
		}
	}
}
