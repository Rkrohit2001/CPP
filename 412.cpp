 #include<iostream>
using namespace std;
main()
{
	int i,j,n,m,k;
	cout<<"enter term of number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==1||i==n)||(j==1||j==n))
			{
				
				cout<<"& ";
				
			
			}
			else
			{
				cout<<"  ";
				for(i=1;i<=n;i++)
				{
				
				//for(j=1;j<i;j++)
				{
					cout<<" ";
				}
				for(j=n-1;j>=i;j--)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
			
			}
					
		}
	
	
		cout<<"\n";
		
	}
}
