#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int a,note;
  //clrscr();
  cout<<"enter your ammount";
  cin>>a;
  if(a%100==0)
  {
     if(a>=200)
     {
       note=a/2000;
       a=a%2000;
       cout<<"\n2000*"<<note;
       }
       if(a>=500)
       {
	 note=a/500;
	 a=a%500;
	 cout<<"\n500*"<<note;
	 }
	 if(a>=200)
	 {
	   note=a/200;
	   a=a%200;
	   cout<<"\n200*"<<note;
	   }
	   if(a>=100)
	   {
	     note=a/100;
	     a=a%100;
	     cout<<"\n100*"<<note;
	     } }
	     else
	     {
	       cout<<"invalid ammount"<<a;
	       }

	       getch();
	       }
