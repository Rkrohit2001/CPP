#include<iostream>
using namespace std;
main()
{
	int sum=0,rem1,rem,rev=0,n,i,m,count=0,sum1=1;
	cout<<"enter your number\n";
	cin>>n;
	m=n;
	while(m>0)
	{
		rem=m%10;
		count++;
		rev=rev*10;
		rev=rev+rem;
		m=m/10;
		
}
	while(count>0)
	{
		rem=n%10;
		while(count>0)
		{
		sum1=sum1*rem;
		count--;	
		}
		sum=sum+sum1;
	count--;
		n=n/10;
}	
	cout<<"sum=\t"<<sum;
}        
