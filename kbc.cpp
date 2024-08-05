//kbc
#include<iostream>
using namespace std;
main()
{
	char n;
	cout<<"question-1:"<<"what is your country name-\n";
	cout<<"a.india  "<<"b.australia  "<<"c.america  "<<"d.japan"<<"\n";
	cin>>n;
	if(n=='a')
	{
		cout<<"congrats you win 10000 rs\n";
		cout<<"do you want to proced or quit\n";
		cin>>n;
		if(n=='y')
		{
			cout<<"question-2: "<<"who is the prime minister of india-\n";
	cout<<"a.rajnath  "<<"b.yogi g  "<<"c.modi g  "<<"d.non of these\n";
	cin>>n;
	if(n=='c')
	{
		cout<<"congrats you win 20000 rs\n";
		cout<<"do want to next question yes or no\n";
		cin>>n;
		if(n=='y')
		{
			cout<<"Q-3: what is your state-\n";
			cout<<"a.mp "<<"b.punjab  "<<"c.up  "<<"d.non of these\n";
			cin>>n;
			if(n=='c')
			{
				cout<<"you won 100000 rs\n";
			}
		}
		else
		{
			cout<<"total winning 20000 try next time for more winning ";
		}
	}
	else
	{
		cout<<"sorry better luck next time";
	}
		}
		else
		{
			cout<<"total winning 10000 try again for more winning\n";
		}
	}
	else
	{
		cout<<"sorry better luck next time\n";
	}
}
