#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char a[100];
	int n,i,fact=1;
	cout<<"enter your file name\n";
		cin>>a;
	ofstream rk("ram.txt");
	if(rk.is_open())
	{
		cout<<"enter your number\n";
		cin>>n;
		for(i=n;i>=1;i--)
		{
			fact=fact*i;
		}
		cout<<"fact="<<fact;
		rk<<fact;
		cout<<"succesfulll";
		rk.close();
	}
	else
	{
		cout<<"error";
	}
	
}
