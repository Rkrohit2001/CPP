#include<iostream>
using namespace std;
void sp(int i);
int n,m;
main()
{
	int sum=0,rem1,rem,rev=0;
	cout<<"enter your number\n";
	cin>>n;
	m=n;
	while(n>0)
	{
		rem=n%10;
		sp(rem);
		n=n/10;
	cout<<rem<<"\t";	
}
}
void sp(int i)
{
	int rem,count=0,sum=0,sum1=1;
	while(n>0)
	{
		rem=n%10;
		count++;
		n=n/10;
   }
	while(count>0)
	{
		sum1=sum1*i;
		count--;
	}
	sum=sum+sum1;
//	cout<<"total=\t"<<sum;
}
