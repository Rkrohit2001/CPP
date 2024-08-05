#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=0;i<=7;i++)
	{
		for(j=7;j>i;j--)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
