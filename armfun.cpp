#include<iostream>
using namespace std;
int arm();
main()
{
	int d,i;
	d=arm();
	cout<<"armstrong="<<d;
}
int arm()
{
	int rem,i,n,sum=0;
	cout<<"enter your number=";
	cin>>n;
	i=n;
	while(n>0)
	{
		rem=n%10;
		rem=rem*rem*rem;
		sum=sum+rem;
		n=n/10;
	}
	if(sum==i)
	{
		return sum;
	}
	else
	{
		cout<<"
		
		not armstrong";
	}
}
