#include<iostream>
//#include<conio.h>
using namespace std;
template<class t,class t1>
void t2(t a,t1 b)
{
	cout<<a<<"\t"<<b<<"\n";
}
main()
{
	int a,b;
	cin>>a>>b;
	t2(a,b);
	t2(14,"asfdghjk");
}
