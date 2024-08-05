#include<iostream>
using namespace std;
main()
{
	int i,j ,n,k;
	cout<<"enter your number";
	cin>>n;
	k=n;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
			
		}
		for(j=n;j>i;j--)
		{
			cout<<"  ";
		}
		for(j=n;j>i;j--)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

	for(i=1;i<=n-2;i++)
	{   
		for(j=1;j<i;j++)
	{
		cout<<"  ";
	}
	for(j=n;j>=i;j--)
	{
		cout<<" *  ";
	}
	
	cout<<"\n";
	}
}
