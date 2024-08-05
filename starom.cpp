#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter your number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		 for(j=1;j<=n;j++)
		 
		 {
		 	 if((i==n||i==1)||(j==n))
		 	 {
		 	 	cout<<"* ";
			  }
			  else
			  {
			  	cout<<"  ";
			  }
		 }
		 for(j=1;j<=n;j++)
		 {
		 	 if((i==n)||(j==n))
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
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			 if((i==n)||(j==1||j==n))
		 	 {
		 	 	cout<<"* ";
			  }
			  else
			  {
			  	cout<<"  ";
			  }

		}
		for(j=1;j<=n;j++)
		{
			 if(i==n)
		 	
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
