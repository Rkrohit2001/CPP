#include<iostream>
using namespace std;
class option
{
	public:
		string name;
	option()
	{
		string str[]={"rohit","ajay","shatish","shubham"};
		cout<<"********* RAILWAY T.C. EXAM **********\n";
		cout<<"enter your name\n";
		cin>>name;
		if(name==str)
		{
			cout<<name;
		}
		else
		{
			cout<<"error";
		}
		
		
		
	}
};
main()
{
	option ob;
}
