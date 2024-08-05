#include<iostream>
#include<stack>
using namespace std;
void push();
void pop();
main()
{
		stack<int>st;
	int choice;
	cout<<"\nEnter your choice\n 1. push:\n 2. pop:\n 3.display:\n";
	cin>>choice;
	
	while(choice!=4)
	{
		//cout<<"\nEnter your choice\n 1. push:\n 2. pop:\n 3.display:\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				  	push();
				  	break;
			case 2:
					//pop();
					//break;
			default:
					cout<<"invalid";
		}
	}
}
void push()
{
	 stack<int>st;
	  int n,i,m;
	  cout<<"\n how many element to be added\n";
	  cin>>m;
	  cout<<"\nenter your "<<m<<" number\n";
	  cin>>n;
	  for(i=0;i<m;i++)
	  {
	  	cin>>n;
	  	st.push(n);
	  }
	 // pop(stack<int>st);

//void pop(stack<int>sst)

//	stack<int>st;
	 while(!st.empty())
	 {
	 	cout<<"\t"<<st.top();
	 	st.pop();
	 }
}
