//armstrong number
#include<iostream>
using namespace std;
int arm(int a);
int rem,sum=0, m=0;

main()
{
	int n,c,i;
	cout<<"enter your number=";
	cin>>n;
	c=n;
	i=arm(n);
	if(c==i)
	{
		cout<<"armstrong number:"<<i;
		
	}
	else 
	{
		cout<<"not a armstrong number:"<<i;
	}
}
int arm(int a)
{
	m++;
	if(m<=a)
	{
		rem=a%10;
		rem=rem*rem*rem;
		sum=sum+rem;
		a=a/10;
		return arm(sum);
		
	}
}

