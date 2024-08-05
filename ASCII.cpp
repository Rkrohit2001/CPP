#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<char(3)<<" ";
		}
		for(j=7;j>i;j--)
		{
			cout<<"   ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<char(i++)<<" ";
		}
		for(j=7;j>i;j--)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<char(1)<<" ";
		}
		cout<<"\n";
	}
}
