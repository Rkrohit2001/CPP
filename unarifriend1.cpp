
#include<iostream>
using namespace std;

class abc
{
	int n,m;
	public:
		abc(int i,int j)
		{
			n=i;
			m=j;
		}
		friend	void    operator++(abc );
	
		
};
void operator++(abc f)
{
	int a;
	//n=10;
	a=f.n+f.m;
	
	cout<<"result="<<a;
}
main()
{
	abc o(5,8);
	++(o);
}  
