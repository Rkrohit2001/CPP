#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"number";
	cin>>n;
	for(i=1;i<=n+1;i++)
	{
		 for(j=i;j<n+1;j++)
		 {
		 	cout<<" ";
		 	
		 }
		 for(j=i-1;j>0;j--)
		 {
		 	cout<<j;
		 	
		 }
		 for(j=0;j<=i-1;j++)
		 {
		 	cout<<j;
		 }
		 cout<<"\n";
	}
}


