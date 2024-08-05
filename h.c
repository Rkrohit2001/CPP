#include<stdio.h>
#include<conio.h>
void main()
{
int num[20],i,n;
printf("enter array size\n");
scanf("%d",&n);
printf("enter %d element\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&num[i]);
}
printf("list of array elements\n");
for(i=0;i<n;i++)
{
	printf("num[%d]=%d\n",i,num[i]);
}
getch();
}

