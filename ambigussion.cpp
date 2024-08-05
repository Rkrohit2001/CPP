#include<iostream>
using namespace std;
class a
{
	public:
		void show()
		{
			cout<<"rohit";
			
		}
		
};
class b:public a
{
	public:
		void show()
		{
			cout<<"kumar";
			
						
		}
};
/*class c: public a,public b
{
	public:
	void get()
	{
		cout<<"yadav";
	}
	
};*/
main()
{
	a *ob;
	ob=new b();
	ob->show();
	
	

}
