#include<iostream>
using namespace std;
main()
{
	double long i,n,a=-1,b=1,c=0;
	cout<<"enter the term of fabonaccy:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
}
