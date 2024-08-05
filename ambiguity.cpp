#include<iostream>
using namespace std;
class A
{
	public:
		void s()
		{
			cout<<"abc";
		}
		
};
class B
{
	public:
		void s()
		{
			cout<<"\ndfg";
		}
	
};
class C:public A,public B
{
	public:
		void s()
		{
			A ob;
			A::s();
			B obj;
			B::s();
		}
};
main()
{
	C o;
	o.s();
}
