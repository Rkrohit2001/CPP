#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
int create(int n);
int display();
struct node
{
	int data;
	struct node *next;  
	
}*start=NULL;

main()
{
	int choice,i,n,m;
	while(1)
	{
		printf("\n ->>>>> MENU <<<<<- \n");
		printf("1.create \n 2. Display \n 3.Exit() \n");
		printf("enter youe choice = ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\n enter your length=");
			  scanf("%d",&n);
			  for(i=1;i<=n;i++)
			  {
			  	printf("\n enter your data =");
			  	scanf("%d",&m);
			  	create(m);
			  }
			  break;
			 case 2:
			 	display();
			 	break;
			case 3:
				exit(0);
			default : printf("\n invalid option \n");
		}
		
	}
}
int create(int n)
{
 struct node *temp,*q;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=n;
 temp->next=NULL;
 if(start==NULL)
 {
 	start=temp;
	 }	
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=temp;
	}
	return 0;
}
int display()
{
	struct node *q;
	q=start;
	if(start==NULL)
	{
		printf("empty list \n");
		
	}
	else
	{
		while(q!=NULL)
		{
			printf("%d\t",q->data);
			q=q->next;
		}
	}
}
