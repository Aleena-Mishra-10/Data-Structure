#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void create(int n);
void traverse();
void detech_node();
void rearrange();
void swap(int m,int n);
int main()
{
	int n;
	int opt;
	char ch;
	do
	{
		printf("enter an element:\n");
		scanf("%d",&n);
		create(n);
		printf("Do you want to enter more?");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse();
	detech_loop();
	rearrange();
	traverse();
	return 0;
}
void create(int n)
{
	struct node *t;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	if(start==NULL)
	{
		start=new;
	}
	else
	{
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=new;
	}
}
void traverse()
{
	struct node *t=start;
		while(t!=NULL)
		{
		printf("%d\n",t->data);
		t=t->next;
		}
}
//floyd's cycle method
void detech_loop()
{
	struct node *slow_p=start;
	struct node *fast_p=start;
	while(slow_p&&fast_p&&fast_p->next)
	{
		slow_p=slow_p->next;
		fast_p=fast_p->next->next;
		if(slow_p==fast_p)
			printf("loop found\n");
		else
			printf("no loop found\n");
	}
}
void rearrange()
{	
	struct node *t=start;
	while(t!=NULL&&t->next!=NULL)
	{
		if(start==NULL)
		{
			return 0;
		}
		swap(t->data,t->next->data);
		t=t->next->next;
	}
}
void swap(int m,int n)
{
	int t;
	t=m;
	m=n;
	n=t;
}
