#include<iostream>
using namespace std;
template<class t,class y,class z>
void as(t&a,y&b,z d,y f)
{
	t c;
	c=a+b+d+f;
	//return c;
	cout<<"result="<<c;
}
 template<class t,class y,class z>
t as(t a,y b,z c)
{
	cout<<"over load=-"<<a+b+c;
}
main()
{
	int a,b,c,d;
	cout<<"enter your number\n";
	cin>>a>>b>>c>>d;
//	cout<<"\n sum of two integer="<<as(a,b);
	as(a,b,c,d);
	as(a,b,c);
}
