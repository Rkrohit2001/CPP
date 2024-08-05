#include<iostream>
using namespace std;
main()
{
	int i,n,m,j=0;
	int num[10];
	cout<<"enter your number=";
	cin>>n;
	int l=n;
	//cout<<(n/2);
		for(i=2;i<=n;i++)
	{
		while(n!=0)
		{
		m=n/i;
		if(m%i==0)
		{
			num[j]=i;
			j++;
		}
		
		n=n/i;
		}
	}
	for(j=0;j<5;j++)
	{
		cout<<num[j];
	}
	
}
