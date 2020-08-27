#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void create(int n);
void display();
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void delete_after();
int main()
{
	int n,opt;
	char ch;
	printf("1.create\n2.display\n3.insert_beg\n4.insert_end\n5.delete_beg\n");
	printf("6.delete_end\n7.delete_after\n8.exit\n");
	while(1)
	{
		printf("enter your option\n");
		scanf("%d",&opt);
		switch(opt)
		{
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
				display();
				break;
			case 3:
				insert_beg();
				display();
				break;
			case 4:
				insert_end();
				display();
				break;
			case 5:
				delete_beg();
				display();
				break;
			case 6:
				delete_end();
				display();
				break;
			case 7:
				delete_after();
				display();
				break;
			case 8:
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
	if(start==NULL)
	{	new->next=new;
		start=new;	
	}
	else
	{
		t=start;
		while(t->next!=start)
		{
			t=t->next;
		}
		t->next=new;
		new->next=start;
	}
}
void display()
{
	struct node *t=start;
	while(t->next!=start)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	printf("%d",t->data);
}
void insert_beg()
{
	struct node *t;
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	t=start;
	while(t->next!=start)
	{
		t=t->next;
	}
	new->next=t->next;
	t->next=new;
	start=new;	
}
void insert_end()
{
	struct node *t;
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=n;
	t=start;
	while(t->next!=start)
	{
		t=t->next;
	}
	t->next=new;
	new->next=start;
}
void delete_beg()
{
	struct node *t=start;
	while(t->next!=start)
	{
		t=t->next;
	}
	t->next=start->next;
	free(start);
	start=t->next;
}
void delete_end()
{
	struct node *t=start;
	struct node *pre;
	while(t->next!=start)
	{
		pre=t;
		t=t->next;
	}
	pre->next=t->next;
	free(t);
}
void delete_after()
{
	struct node *t=start;
	struct node *pre;
	pre=t;
	int val;
	printf("enter the value after which you want to delete\n");
	scanf("%d",&val);
	while(pre->data!=val)
	{
		pre=t;
		t=t->next;
	}
	pre->next=t->next;
	if(t==start)
	{
		start=pre->next;
	}
	free(t);	
}
