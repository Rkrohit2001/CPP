#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter your number=";
	cin>>n;
	i=2;
	while(i<=n-1)
	{
		j=1;
		while(j<=i)
		{
			if((i==1||i==n)||(j==1||j==i))
			{
				cout<<"* ";
			}
			else
			{
				 cout<<"  ";
			}
						j++;
		}
		j=n;
		while(j>i)
		{
			cout<<"  ";
			j--;
		}
		j=n;
		while(j>i)
		{
			cout<<"  ";
			j--;
		}
		j=1;
		while(j<=i)
		{
			if((i==1||i==n)||(j==1||j==i))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
			j++;
		}
		cout<<"\n";
		i++;
	}
	}
