#include<iostream>
using namespace std;
main()
{
	int a[10][10],m,k,i,j,row,col,sum=0;
	cout<<"enter matrix order in row and colom";
	cin>>row>>col;
	cout<<"enter"<<row*col<<"  elements in matrix\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"my matrix is=\n";
	for(i=0;i<row;i++)
	{ 
		
		for(j=0;j<col;j++)
		{
			sum=0;
			m=0;
			sum=sum+a[j][i];
			cout<<"\t"<<a[i][j];
			m=sum;       
			 	
		}
	cout<<"\n";
}
	
		
	
	for(k=0;k<col;k++)
	{
		cout<<"\t"<<"="<<m;
	}
		//cout<<"\t"<<"="<<sum;

		
	
}
