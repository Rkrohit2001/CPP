#include<iostream>
using namespace std;
main()
{
	int i,j,n,k;
	cout<<"enter your number for the star";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=n;j>=i;j--)
		{
			
			cout<<k++<<" ";
		}
		
		cout<<"\n";
	}
}
