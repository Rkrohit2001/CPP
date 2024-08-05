#include<iostream>
using namespace std;
int digit(int n);
int count=0;
main()
{
	long i,c;
	cout<<"enter your number=";
	cin>>i;
	c=digit(i);
	cout<<"digit="<<c;
}
	int digit(int n)
	{
	
	if(n>0)
	{
		return digit(count++);	
	}
}
