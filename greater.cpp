#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter your three number\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"greater is="<<a;
		}
		else 
		{
			cout<<"greter="<<c;
		}
	}
	else
	{
		if(b>c)
		{
				cout<<"greater is="<<b;
			}
			else
			{
			cout<<"greater is="<<c;	
			}
	}
}

