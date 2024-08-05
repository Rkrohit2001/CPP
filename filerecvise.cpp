#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string s;
	ofstream file("rohit.txt");
	if(file.is_open())
	{
		cout<<"iner your name\n";
		cin>>s;
		file<<s;
		cout<<"\n succesfull";
		file.close();
	}
	else
	{
		cout<<"error";
	}
}
