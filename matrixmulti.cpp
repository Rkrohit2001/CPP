#include<iostream>
using namespace std;
 main()
{
	int m[5][5],m2[5][5],m3[5][5];
	int i,j,k,r,c,r2,c2;
	cout<<"enter first matrix order\n";
	cin>>r>>c;
	cout<<"enter your second matirx order\n";
	cin>>r2>>c2;
	if(c==r2)
	{
		cout<<"enter "<<r*c<<" element in your first matrix\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>m[i][j];
			}
		}
		cout<<"\n enter "<<r2*c2<<" elment in your second matix\n";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cin>>m2[i][j];
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c2;j++)
			{
				m3[i][j]=0;
				for(k=0;k<c;k++)
				{
					m3[i][j]=m3[i][j]+(m[i][k]*m2[k][j]);
				}
			}
		}
		cout<<"\n first matrix\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<m[i][j]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\n second matirx \n";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<m2[i][j]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\nmultiiply matrix\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<m3[i][j]<<"\t";
			}
			cout<<"\n";
		}
		
	}
}
