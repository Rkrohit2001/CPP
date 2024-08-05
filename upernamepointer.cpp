#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string name[20];
	int i,n;
	cout<<"enter length of students\n";
	cin>>n;
	cout<<"enter  "<<n<<"  student name";
	for(i=0;i<n;i++)
	{
		cin>>name[i];
		
	}
	cout<<"student name\n";
	for(i=0;i<n;i++)
	{
		strupr(name[i ]);
		
		cout<<name[i]<<endl;
		
	}
	
}
