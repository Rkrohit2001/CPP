#include<iostream>
using namespace std;
class rk
{
	int a,b;
	public:
		rk(int i,int j):a(a=i),b(b=j){}
		friend class s;
		               
};
class s
{
	public:
		void sum(rk r)
		{
			int s=r.a+r.b;
		cout<<s"sum=" << s;
		}
};
main()
{
	int a,b;
	cout<<"enter any two number\n";
	cin>>a>>b;
	rk t(a,b);
	s v;
	v.sum(t);
}
