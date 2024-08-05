#include<iostream>
using namespace std;
main()
{
	int i,j ,n,k;
	cout<<"enter your number";
	cin>>n;
for(i=1;i<=n;i++)
{

	for(j=n;j>i;j--)
		{
			cout<<" ";
		
		}

		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		
		cout<<"\n";
	}
}
