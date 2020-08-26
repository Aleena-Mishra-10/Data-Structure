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
void delete_ending();
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
	delete_ending();
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
void delete_ending()
{
	int k,i;
	struct node *t1=start;
	struct node *t2=start;
	printf("enter the position which you want to delete from the end:\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		if(t2==NULL)
			if(i==k-1)
				start=start->next;
		t2=t2->next;
	}
	while(t2->next!=NULL)
	{
		t2=t2->next;
		t1=t1->next;
	}
	t1->next=t1->next->next;
}
