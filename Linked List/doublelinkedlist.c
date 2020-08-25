#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *start=NULL;
void create(int n);
void traverse();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_after();
void delete_before();
int main()
{	int opt;
	int n;
	char ch;
	printf("1.create\n 2.traverse\n 3.insert from beginning\n 4.insert in end\n 5.insert after\n ");
	printf("6.insert before an perticular node\n 7.delete from beginning\n 8.delete from end\n 9.delete after\n");
	printf("10.delete before \n11.exit\n");
	while(1)
	{
		printf("enter your option\n");
		scanf("%d",&opt);
	switch(opt){
	case 1:
	do 
	{
		printf("enter an element\n");
		scanf("%d",&n);
		create(n);
		printf("do you want to enter more?\n");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	break;
	case 2:
	traverse();
	break;
	case 3:
	insert_beg();
	traverse();
	break;
	case 5:
	insert_after();
	traverse();
	break;
	case 4:
	insert_end();
	traverse();
	break;
	case 6:
	insert_before();
	traverse();
	break;
	case 7:
	delete_beg();
	traverse();
	break;
	case 8:
	delete_end();
	traverse();
	break;
	case 9:
	delete_after();
	traverse();
	break;
	case 10:
	delete_before();
	traverse();
	case 11:
	exit(0);
	break;
}
	
}
	return 0;
}

void create(int n)
{
	struct node *t;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	new->prev=NULL;
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
		new->prev=t;
		new->next=NULL;
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
void insert_beg()
{
	struct node *t;
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	new->prev=NULL;
	start=new;	
}
void insert_end()
{
	struct node *t;
	t=start;
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	while(t->next=NULL)
	{
		t=t->next;
	}
	t->next=new;
	new->prev=t;
	new->next=NULL;
}
void insert_before()
{
	struct node *t=start;
	int n,val;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter the element before which you want to insert\n");
	scanf("%d",&val);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	while(t->data!=val)
	{
		t=t->next;
	}
	new->next=t;
	new->prev=t->prev;
	t->prev->next=new;
	t->prev=new;
}
void insert_after()
{
	struct node *t=start;
	int n,val;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter the element after which you want to insert\n");
	scanf("%d",&val);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	while(t->data!=val)
	{
		t=t->next;
	}
	new->prev=t;
	new->next=t->next;
	t->next->prev=new;
	t->next=new;		
}
void delete_beg()
{
	struct node *t=start;
	t=start;
	start=start->next;
	start->prev=NULL;
	free(t);
}
void delete_end()
{
	struct node *t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->prev->next=NULL;
	free(t);
}
void delete_after()
{
	struct node *t=start;
	struct node *temp;
	int val;
	printf("enter the element after which you want to delete\n");
	scanf("%d",&val);
	while(t->data!=val)
	{
		t=t->next;
	}
	temp=t->next;
	t->next=temp->next;
	temp->next->prev=t;
	free(temp);
}
void delete_before()
{
	struct node *t=start;
	struct node *temp;
	int val;
	printf("enter the element before which you want to delete\n");
	scanf("%d",&val);
	while(t->data!=val)
	{
		t=t->next;
	}
	temp=t->prev;
	if(temp==start)
	{
		delete_beg();
	}
	else
	{
		t->prev=temp->prev;
		temp->prev->next=t;
	}
	free(temp);
}
