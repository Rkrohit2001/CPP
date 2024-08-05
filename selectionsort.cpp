#include<iostream>
using namespace std;
int smallest(int a[],int i);
main()
{
	int a[10],i,j,temp;
	cout<<"enter 10 element\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		j=smallest(a,i);
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
	}
	cout<<"\nsorted element\n";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	
}
int smallest(int a[],int i)
{
	int small,j,pos;
	small=a[i];
	pos=i;
	for(j=i+1;j<10;j++)
	{
		if(small>a[j])
		{
			small=a[j];
			pos=j;
		}
	}
	return pos;
}
