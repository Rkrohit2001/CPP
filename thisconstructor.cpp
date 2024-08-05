#include<iostream>
using namespace std;
class rohit
{
	public:
		int n,m;
		static int sal;
	rohit(int n,int m)
	{
		this->n=n;
		this->m=m;
	}
	void display()
	{
		cout<<"sum="<<n+m;
		cout<<"\nsub="<<n-m;
		
	}
};
static int sal=7900;
main()
{
	int a,b;
	cout<<"enter your number\n";
	cin>>a>>b;
	cout<<"\nsalary="<<sal<<"\n";
	rohit ob(a,b);
	//rohit ob1=ob1(a,b);
	ob.display();
}
