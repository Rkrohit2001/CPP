#include<iostream>
using namespace std;
class s
{
	int *p;
	public:
		s()
		{
			p=new int[3]{1,2,3};
			for(int i=0;i<3;i++)
			{
				cout<<p[i]<<" ";
				
			}
			cout<<"\n";
		}
};
main()
{
	s *ob=new s[5];
	
}
