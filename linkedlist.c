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
void insert_beg();
void insert_end();
void insert_after();
void insert_before();
void insert_pos();
void delete_beg();
void delete_end();
void delete_after();
void delete_node();
void delete_list();
void delete_pos();
void sort_list();
void reverse();
//void count();

int main()
{
	int n;
	int opt;
	char ch;
	printf("1.create\n 2.traverse\n 3.insert from beginning\n 4.insert in end\n 5.insert after\n ");
	printf("6.insert before an perticular node\n 7.delete from beginning\n 8.delete from end\n 9.delete after\n");
	printf("10.delete a node\n 11.delete list\n 12.sort list\n 13.reverse list\n 14.exit\n 15.delete at a given position\n");
	printf("16.insert at a given position\n 17.count no of nodes\n");
	while(1)
	{
		printf("enter your option\n");
		scanf("%d",&opt);
	switch(opt)
	{
	case 1:	
	do
	{
		printf("enter an element:\n");
		scanf("%d",&n);
		create(n);
		printf("Do you want to enter more?");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
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
	delete_node();
	traverse();
	break;
	case 11:
	delete_list();
	traverse();
	break;
	case 12:
	sort_list();
	traverse();
	break;
	case 13:
	reverse();
	traverse();
	break;
	case 14:
	exit(0);
	break;
	case 15:
	delete_pos();
	traverse();
	break;
	case 16:
	insert_pos();
	traverse();
	break;
	/*case 17:
	count();
	break;*/
}
}
	return 0;
}
//creating a list of n nodes
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
	if(start==NULL)
	{
		printf("linked list is empty\n");
	}
	else
	{
	
		while(t!=NULL)
		{
		printf("%d\n",t->data);
		t=t->next;
		}
	}
}
void insert_beg()
{	int n;
	printf("enter an element to insert\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	new->next=start;
	start=new;
}
void insert_after()
{
	struct node *t=start;
	int n,item;
	printf("enter a new element\n");
	scanf("%d",&item);
	printf("enter the element after which you want to insert\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=item;
	while(t->data!=n)
	{
		t=t->next;
	}
	new->next=t->next;
	t->next=new;
}
void insert_end()
{	struct node *t=start;
	int n;
	printf("enter an element to insert\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=new;
	new->next=NULL;
}
void insert_before()
{
	struct node *t1,*t2;
	int n,item;
	printf("enter a new element\n");
	scanf("%d",&item);
	printf("enter the element before which you want to insert\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=item;
	t1=start;
	t2=start;
	while(t1->data!=n)
	{
		t2=t1;
		t1=t1->next;
	}
	new->next=t2->next;
	t2->next=new;
	
}
void delete_beg()
{
	struct node *t=start;
	start=start->next;
	free(t);
}
void delete_end()
{
	struct node *t,*t1;
	t=start;
	while(t->next!=NULL)
	{
		t1=t;
		t=t->next;
	}
	t1->next=NULL;
	free(t);
}
void delete_after()
{
	struct node *t,*t1;
	int val;
	printf("enter the value after which you want to delete\n");
	scanf("%d",&val);
	t=start;
	t1=t;
	while(t1->data!=val)
	{
		t1=t;
		t=t->next;
	}
	t1->next=t->next;
	free(t);
}
void delete_node()
{
	struct node *t,*t1;
	int val;
	printf("enter the value of the node\n");
	scanf("%d",&val);
	while(t->data!=val)
	{
		t1=t;
		t=t->next;
	}
	t1->next=t->next;
	free(t);
}
void reverse()
{
	struct node *cur=start;
	struct node *prev=NULL, *next=NULL;
	while(cur!=NULL)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	start=prev;
}
void delete_list()
{
	struct node *cur=start;
	struct node *next;
	while(cur!=NULL)
	{
		next=cur->next;
		free(cur);
		cur=next;
	}
	start=NULL;
}
void sort_list()
{
	struct node *t1,*t2;
	t1=start;
	int a;
	while(t1!=NULL)
	{
		t2=t1->next;
		while(t2!=NULL)
		{
			if(t1->data>t2->data)
			{
				a=t1->data;
				t1->data=t2->data;
				t2->data=a;	
			}
			t2=t2->next;
		}
		t1=t1->next;
	}
}
void delete_pos()
{	int pos;
	int i;
	printf("Enter the position where to delete\n");
	scanf("%d",&pos);
	if(start==NULL)
	{
		return;
	}
	struct node *t=start;
	if(pos==0)
	{
		start=t->next;
		free(t);
		return;
	}
	for(i=0;t!=NULL&&i<(pos-1);i++)
	{
		t=t->next;
	}
	if(t==NULL||t->next==NULL)
	{
		return;
	}
	struct node *next=t->next->next;
	free(t->next);
	t->next=next;		
}
void insert_pos()
{
	int pos,i;
	int data;
	printf("enter the position and data \n");
	scanf("%d%d",&pos,&data);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	struct node *t=start;
	for(i=0;t!=NULL&&i<(pos-1);i++)
	{
		t=t->next;
	}
	new->next=t->next;
	t->next=new;
	
}
