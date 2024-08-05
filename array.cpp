#include<iostream>
using namespace std;
main()
{
	int a[10],i,max;
	cout<<"enter array number=";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
}
