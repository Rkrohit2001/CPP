#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"------ptinting K-----\n";
	cout<<"enter your number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		 for(j=n;j>=i;j--)
		 {
		 	if((i==1)||(j==1))
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
