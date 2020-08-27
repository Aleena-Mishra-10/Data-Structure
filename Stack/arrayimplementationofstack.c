#include<stdio.h>
#include<stdlib.h>
#define size 10
int a[10];
int top1=-1;
int top2=10;
void push1(int a[10],int n);
void push2(int a[10],int n);
int pop1();
int pop2();
void display1(int a[10]);
void display2(int a[10]);
int main()
{	int val,opt;
	char ch;
	printf("1.PUSH1\n");
	printf("2.PUSH2\n");
	printf("3.POP1\n");
	printf("4.POP2\n");
	printf("5.DISPLAY1\n");
	printf("6.DISPLAY2\n");
	printf("7.EXIT\n");
	printf("YOU CAN ENTER ONLY 10 ELEMENTS\n");
	while(1)
	{
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				do
				{
					printf("enter the number to be pushed on stack:\n");
					scanf("%d",&val);
					push1(a,val);
					printf("do you want to enter more\n");
					scanf(" %c",&ch);
				}while(ch=='y');
				break;
			case 2:
				do
				{
					printf("enter the number to be pushed on stack:\n");
					scanf("%d",&val);
					push2(a,val);
					printf("do you want to enter more\n");
					scanf(" %c",&ch);
				}while(ch=='y');
				break;
			case 3:
					val=pop1(a);
					printf("\n THE VALUE DELETED FROM STACK IS :%d",val);
					break;
			case 4:
					val=pop2(a);
					printf("\n THE VALUE DELETED FROM STACK IS :%d",val);
					break;
			case 5:
				display1(a);
				break;
			case 6:
				display2(a);
				break;
			case 7:
				exit(0);
				break;		
		}
	}
	return 0;
}
void push1(int a[10],int n)
{
	if(top1+1==top2)
	{
		printf("overflow!!");
	}
	else
	{
		top1++;
		a[top1]=n;
		
	}
}
void push2(int a[10],int n)
{
	if(top1+1==top2)
	{
		printf("overflow!!");
	}
	else
	{
		top2--;
		a[top2]=n;
		
	}
}
int pop1()
{
	int m;
	if(top1==-1)
	{
		printf("underflow!!");
	}
	else
	{
		m=a[top1];
		top1--;
		return m;
	}
}
int pop2()
{
	int m;
	if(top2==size)
	{
		printf("underflow!!");
	}
	else
	{	
		m=a[top2];
		top2++;
		return m;
	}
}
void display1(int a[10])
{
	int i;
	if(top1==-1)
	{
		printf("empty!!");
	}
	else
	{
	for(i=top1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	}
}
void display2(int a[10])
{
	int i;
	if(top2==size)
	{
		printf("empty!!");
	}
	else
	{
	for(i=top2;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
}
