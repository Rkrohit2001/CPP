#include<iostream>
using namespace std;
int palindrom(int a);
main()
{
	int a,b,c;
	cout<<"enter any num:";
	cin>>a;
	c=a;
	b=palindrom(a);
	if(b==c)
	{
		cout<<"palindrom number="<<b;
	}
	else
	{
		cout<<"not a palindrom num="<<b;
		
	}
}
int palindrom(int a)
{
	int rem,rev=0;
	while(a>0)
	{
	rem=a%10;
	rev=rev*10;
	rev=rev+rem;
	a=a/10;
}
 	return rev;
}

