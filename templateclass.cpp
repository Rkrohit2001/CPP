#include<iostream>
using namespace std;
template<class t,class t2>
class test
{
	t a;
	t2 b;
	public:
		test(t x,t2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a+b;
		}
};
main()
{
	test<int,int>get1(5,6);
	get1 .show();
}
