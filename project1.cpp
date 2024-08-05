#include<iostream>
#include<conio.h>
using namespace std;

void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void Q();
void R();
void S();
void T();
void U();
void V();
void W();
void X();
void Y();
void Z();

main()
{
	char a[10],b;
	int c;
	cout<<"enter your name\n";
	cin.getline(a,10);
	
	b=a[0];
	c=b;
	cout<<"\n";
	if(c<=91)
	{
	switch(c)
	{
		case 65:
			A();
			break;
		case 82:
			 	R();
				  
			    break;
		case 66:
			   B();
			   break;
		case 67:
			 	C();
			 	break;
		case 68:
				D();
				break;
		case 69:
				E();
				break;
		case 70:
			   F();
			   break;
		case 71:
			   G();
			   break;
		case 72:
				H();
				break;
		case 73:
			    I();
			    break;
		case 74:
			    J();
			    break;
		case 75:
			     K();
			     break;
		case 76:
				L();
				break;
		case 77:
				M();
				break;
		case 78:
				N();
				break;
		case 79:
				O();
				break;
		case 80:
			 	P();
			 	break;
		case 81:
				Q();
				break;
		case 83:
				S();
				break;
		case 84:
				T();
				break;
		case 85:
				U();
				break;
		case 86:
				V();
				break;
		case 87:
				W();
				break;
		case 88:
				X();
				break;
		case 89:
				Y();
				break;
		case 90:
				Z();
				break;
								
		default:
			cout<<"invalid";
				break;
	}
}
else
{
		switch(c)
	{
		case 97:
			A();
			break;
		case 114:
			 	R(); 
			    break;
		case 98:
			   B();
			   break;
		case 99:
			 	C();
			 	break;
		case 100:
				D();
				break;
		case 101:
				E();
				break;
		case 102:
			   F();
			   break;
		case 103:
			   G();
			   break;
		case 104:
				H();
				break;
		case 105:
			    I();
			    break;
		case 106:
			    J();
			    break;
		case 107:
			     K();
			     break;
		case 108:
				L();
				break;
		case 109:
				M();
				break;
		case 110:
				N();
				break;
		case 111:
				O();
				break;
		case 112:
				P();
				break;
		case 113:
			    Q();
			    break;
		case 115:
				S();
				break;
		case 116:
				T();
				break;
		case 117:
				U();
				break;
		case 118:
				V();
				break;
		case 119:
				W();
				break;
		case 120:
				X();
				break;
		case 121:
				Y();
				break;
		case 122:
				Z();
				break;
						
		default:
			cout<<"invalid";
				break;
	}

}
getch();
	
}
void A()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void B()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==2||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==2||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void C()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-n/2;j++)
		{
				if((i==1||i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	
}
void D()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1)||(j==2||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==2||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	
}
void E()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void F()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1||i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void G()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=3;i<=n;i++)
	{
		for(j=3;j<=n;j++)
		{
				if((i==n)||(j==3))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		for(j=3;j<=n;j++)
		{
			if((i==3)||(j==3||j==n))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}
void H()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void I()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1)||(j==n-n/2))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==n)||(j==n-n/2))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void J()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==1)||(j==n-n/2))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=4;i<=n;i++)
	{
		for(j=4;j<=n;j++)
		{
				if((i==n)||(j==4||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void K()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
				if((j==1||j==n||j==i))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				if((i==1)||(j==1||j==i))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void L()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(j==1)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if((i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }	
		}
		cout<<"\n";
	}
}
void M()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				if((i==1)||(j==1||j==i))
			  		{
			  			cout<<"*";
					  }
					  else
					  {
					  	cout<<" ";
					  }	
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			if((i==1)||(j==1||j==i))
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(j==1)
			  		{
			  			cout<<"*";
					  }
					  else
					  {
					  	cout<<" ";
					  }	
		}
		for(j=1;j<=n;j++)
		{
			if(j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<"\n";
	}
}
void N()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((j==1||j==i))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
			  	}
			  	for(j=1;j<=n;j++)
			  	{
			  		if(j==1)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				  }
				  cout<<"\n";
			}
	
}
void O()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1||i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
			  	}
			  	cout<<"\n";
			  }
	
}
void P()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1||i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=i;j++)
			  	{
			  		if(j==1)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
void Q()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1||i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=i;j++)
			  	{
			  	cout<<" ";
				}
				for(j=n;j>=i;j--)
				{
					if(j==n-n/2)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
void R()
{
{	
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1||i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=i;j++)
			  	{
			  		if(j==1||j==i)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
	K();
}
void S()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1||i==n)||(j==1))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((j==n)||(i==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
void T()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==1)||(j==n-n/2))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if(j==n-n/2)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
void U()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if(j==1||j==n)
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
					  
				  }
				  cout<<"\n";
			  }
			  for(i=2;i<=n;i++)
			  {
			  	for(j=1;j<=n;j++)
			  	{
			  		if((i==n)||(j==1||j==n))
			  		{
			  			cout<<"* ";
					  }
					  else
					  {
					  	cout<<"  ";
					  }
				}
				cout<<"\n";
			  }
		cout<<"\n";
	
}
void V()
{
	int i,j,n=7;
	 for(i=1;i<=n;i++)
			  {
			  
			
			 
			  	for(j=1;j<i;j++)
			  	{
			  	
					  	cout<<" ";
					 
				}
				for(j=n;j>=i;j--)
				{
					if(j==n)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				for(j=n;j>=i;j--)
				{
					if(j==i)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<"\n";
			  }
		
	
}
void W()
{
	int i,j,n=8;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		for(j=1;j<=n;j++)
		{
			if(j==n)
			{
				cout<<"*";
				
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if((i==n)||(j==1||j==i||j==n))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
			if((i==n)||(j==1||j==n||j==i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
void X()
{
	int i,j,n=7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				if((j==n||j==i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
				if((j==n))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}	
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
				if((j==i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
				if((j==n))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}	
	
}
void Y()
{
	int i,j,n=8;
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				if((j==n||j==i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
				if((j==n))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}	
	
}
void Z()
{
	int i,j,n=7;
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(i==1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=n;j>=i;j--)
		{
				if((i==1)||(j==1||j==i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
					if((i==n)||(j==1||j==n))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<=n;j++)
		{
			if(i==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
	
		cout<<"\n";
	}	
	
}
