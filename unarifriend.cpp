#include<iostream>
using namespace std;
class u
{
	private:
	 static int a,b,c;
	public:
		u(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
			
		}
		void display()
		{
			cout<<a<<" "<<b<<" "<<c;
		}
		friend void operator++(u r)
		{
			a=r.a++;
			b=r.b++;
			c=r.c++;
		}
};
main()
{
	u ob(5,55,5);
	cout<<"not ++++";
	ob.display();
	operator++(ob);
	cout<<"\n after ++++";
	ob.display();
}
