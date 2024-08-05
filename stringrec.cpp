#include<iostream>
#include<string.h>
using namespace std;
int a=0;
char* str(char i[100]);
main()

{
	char i[100],j[100];
	cout<<"enter your messege:";
	cin.getline(i,100);
	str(i);
	strcpy(j,str(i));
	cout<<"revers string is:"<<j;
}
char* str(char i[100])
{
	
	a++;
	if(a>=0)
	{
		strrev(i);
		return strrev(str(i));
	}
}
