
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
		friend	void    operator+(abc,abc );
	
		
};
void operator+(abc f,abc g)
{				
	int a;
	//n=10;
	a=f.n+g.m;
	
	cout<<"result="<<a;
}
main()
{
	abc o(5,8);
	abc o1(3,5);
	o+(o,o1);
}  		
