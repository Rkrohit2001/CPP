#include<iostream>
using namespace std;
class st
{
	public:
	
	void show()
	{
		int i,j,k,l,a[10],b[10],c[10],d[10];
		cout<<"enter student name\n";
		j=0;
		k=0;
		l=0;	
		for(i=0;i<5;i++)
		{
			cin>>b[i];
			cin>>a[j];
			cin>>c[k];
			cin>>d[l];
			j++;
			k++;
			l++;
			
		}
		/*cout<<"\n enter roll number\n";
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
		cout<<"\n enter course code\n";
		for(i=0;i<5;i++)
		{
			cin>>c[i];
		}
		cout<<"\n enter marks\n";
		for(i=0;i<5;i++)
		{
			cin>>d[i];
		}
		cout<<"\n/n/n/n\n students list\n/n/n\n";
		for(i=0;i<5;i++)
		{
			cout<<b[i]<<"   "<<a[i]<<"   "<<c[i]<<"   "<<d[i]<<"\n";
		}*/
		
		
	}
	
};
main()
{
	st ob;
	ob.show();
	}
