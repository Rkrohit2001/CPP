#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter your nmber";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			
				if(j==n||j==i)
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
	
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i==n&&i==1)||(j==1||j==i))
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
