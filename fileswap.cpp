#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	FILE *ptr,*ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
	char fname[100],msg[200],name[100],msg2[200],msg3[200],temp[100];
	cout<<"enter file name=";
	gets(fname);
	ptr=fopen(fname,"r");
	if(ptr==NULL)
	{
		cout<<"file not found!!!";
		exit(0);
	}
	fgets(msg,200,ptr);
	
	cout<<"enter temp file name==";
	gets(temp);
	ptr2=fopen(temp,"w");
	if(ptr2==NULL)
	{
		cout<<"file not found!!!...";
		exit(0);
	}
	fputs(msg,ptr2);
	fclose(ptr2);
	cout<<"\n enter second file name=";
	gets(name);
	ptr1=fopen(name,"r");
	if(ptr1==NULL)
	{
		cout<<"file not find!!!";
		exit(0);
	}
	fgets(msg2,200,ptr1);
	ptr3=fopen(fname,"w");
	fputs(msg2,ptr3);
	ptr4=fopen(temp,"r");
	fgets(msg3,200,ptr4);
	cout<<"msg3=="<<msg3;
	ptr5=fopen(name,"w");
	fputs(msg3,ptr5);
	fclose(ptr5);
	fclose(ptr4);
	fclose(ptr3);
	
	
	
	
	fclose(ptr);
}
