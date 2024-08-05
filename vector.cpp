#include<iostream>
#include<vector>
using namespace std;
main()
{
	int i,size,flag;
	string n,j;
	vector<string> num;
	cout<<"enter your size\n";
	cin>>size;
	cout<<"\n enter your name\n";
	for(i=0;i<size;i++)
	{
		cin>>n;
		num.push_back(n);
	}
	cout<<"\n searching name\n";
	cin>>j;
	
//	cout<<"\n name list\n";
	for(i=0;i<num.size();i++)
	{
		if(num[i]==j)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"search found:"<<j;
	}
	else
	{
		num.push_back(j);
		cout<<"\n sorry not found but element added";
		cout<<"\n and your new list is:";
		for(i=0;i<num.size();i++)
		{
			cout<<"\n"<<num[i]<<"\n";
		}
	}

}
