#include<iostream>
using namespace std;
 main()
{
	int i,j,n;
	
	
	cout<<"enter term of pattern";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==1||i==n)||(j==1||j==n))
			{
			cout<<"R ";
		}
		else
		{ cout<<"  ";
		}
		}
		cout<<"\n";
	}	
	for(i=2;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				if((i==1&&i==n)||(j==1||j==i))
				{
				cout<<"R";
			}
			else
			{cout<<"  ";
			}
			}
			
			cout<<"\n";
	}
	
	}

