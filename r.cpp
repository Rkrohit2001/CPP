#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter your term of number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==1||i==n)||(j==1||j==n))
			{
				cout<<"R ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	for(i=2;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i==1||i==n)||(j==1||j==i))
			{
				cout<<"R ";
			}
			else
			{
				cout<<"  ";
			}
			
		}
		cout<<"\n";
	}
}
