#include<iostream>
using namespace std;
class a
{
	public:
	void r()
		{
		 cout<<"class A\n";
		}
};
class b:public a
{
	public:
	void ro()
	{
		cout<<"class B\n";
		
	}
};
class c:public a
{
	public:
	 void roh()
	 {
	 	cout<<"class C\n";
	} 
};
class d:public b,public c
{
	public:
	void rohi()
	{
		cout<<"class D";
	}
};
main()
{
	d ob;
	ob.r();
	ob.ro();
	ob.roh();
	ob.rohi();
}

