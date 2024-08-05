#include<iostream>
using namespace std;
class sample
{
	int num;
	public:
	sample(int n):num(num=n){}
	friend void p(sample);
	
};
void p(sample s)
{
	int i,f=0,k;
	i=s.num;
	for(k=2;k<=i/2;k++)
	{
		if(i%k==0)
		{
			f=1;
			break;
		}
	}
	if(f==00)
	{
		cout<<"prime no="<<i;
		
	}
	else
	{
		cout<<"not prime="<<i;
	}
}
main()
{
	int a;
	cout<<"enter any number \n";
	cin>>a;
	sample o(a);
	p(o);
}
