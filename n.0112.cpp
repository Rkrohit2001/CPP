#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter your number";
	cin>>n;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==1||i==n)||(j==1||j==i))
			{
				cout<<"* ";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<=i;j++)
		{
			if((j==1||j==n)||(i==1&&i==n))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}
