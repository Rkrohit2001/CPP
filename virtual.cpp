#include<iostream>
using namespace std;
class A
{
	public:
		int x=10;
	virtual	void display()
		{
			cout<<"value of X="<<x;
			
		}
		
};
class B:public A
{
	public:
		 int x=20;
		void display()
		{
		 	cout<<"value of X="<<x;
		}
		
};
main()
{
	A *a;
	B b;
	a=&b;
	a->display();
}
