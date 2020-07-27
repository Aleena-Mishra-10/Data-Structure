#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
void create(struct node *p);
int count(struct node *p);
void print(struct node *p);
int main()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	create(new);
	printf("\n");
	print(new);
	printf("\n");
	printf("\n number of items=%d",count(new));
}
void create(struct node *p)
{
	printf("input number\n");
	printf("(type -999 at the end):");
	scanf("%d",&p->data);
	if(p->data==-999)
	{
		p->next=NULL;
	}
	else
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		create(p->next);//recursion occurs
	}
	return ;
	
}
void print(struct node *p)
{
	if(p->next!=NULL)
	{
		printf("%d-->",p->data);
		if(p->next->next==NULL)
		printf("%d",p->next->data);
		print(p->next);
		
	}
	return;
}
int count(struct node *p)
{
	if(p->next==NULL)
	{
		return (0);
	}
	else
	{
		return(1+count(p->next));
	}
}
