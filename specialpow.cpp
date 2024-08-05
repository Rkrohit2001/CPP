#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c=0,d,n,s=0,k;
	cout<<"enter your numnber\n";
	cin>>a;
	n=a;
	k=n;
	while(a>0)
	{
		b=a%10;
		c++;
		a=a/10;
		
	}
	cout<<"total number is"<<c<<endl;
	while(c>0)
	{
		d=n%10;
		s=s+pow(d,c);
		n=n/10;
		c--;
	}
	//cout<<"answeris\t"<<s;
	if(s==k)
	{
		cout<<"special number="<<k;
	}
	else{
		cout<<"not special no="<<k;
	}
}
