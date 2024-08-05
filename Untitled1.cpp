#include<iostream>
#include<stack>
using namespace std;
void push();
void pop();
void display(stack<int>s);
main()
{
	stack<int>s;
	int choice;
	cout<<"Enter your choice\n 1. push:\n 2. pop:\n 3.display:\n";
	cin>>choice;
	
	while(choice!=4)
	{
		cout<<"Enter your choice\n 1. push:\n 2. pop:\n 3.display:\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				  	push();
				  	break;
			case 2:
					pop();
					break;
			//case 3:
			//		display(stack<int> s);
			//		break;
			case 4:
					exit(0);
			default:
					cout<<"invalid option\n";
					break;
		}
	}
}
void push()
{
	stack<int>s;
	int n;
	cout<<"enter your numbeer= ";
	cin>>n;
	while(!s.empty())
	{
	
	s.push(n);
	}//display(stack<int>s);
}
void pop()
{
	stack<int>s;
	while(!s.empty())
	{
		cout<<"\t"<<s.top();
 		s.pop();
	}
	//display(stack<int>s);
}
 /*void display(stack<int>s)
 {
 	stack<int>sample=s;
 	while(!sample.empty())
 	{
 		cout<<"\t"<<sample.top();
 		sample.pop();
	 }
 }*/
