#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct queue
{
	struct node *data;
	struct queue *next;
};
struct queue *rear=NULL;
struct node *tree=NULL;
void front_init(struct queue *qp);
void enqueue(struct node *e);
struct node * dequeue();
struct node *insert(int val);
void level_order(struct node *tree);
struct node *insert(int val)
{
	struct node *childptr,*parentptr;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->left=NULL;
	new->right=NULL;
	if(tree==NULL)
	{
		tree=new;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		parentptr=NULL;
		childptr=tree;
		while(childptr!=NULL)
		{
			parentptr=childptr;
			if(val<childptr->data)
			{
				childptr=childptr->left;
			}
			else
			{
				childptr=childptr->right;
			}
		}
		if(val<parentptr->data)
		{
			parentptr->left=new;
		}
		else
		{
			parentptr->right=new;
		}
	}
	return tree;
}
void level_order(struct node *tree)
{
	struct node *t=tree;
	struct node *x;
	if(t!=NULL)
	{
		enqueue(t);
	}
	while(rear!=NULL)
	{	
		x=dequeue();
		printf("\t%d",x->data);
		if(x->left)
		{
		enqueue(x->left);
		}
		if(x->right)
		{
			enqueue(x->right);
		}
		
	}
}
void enqueue(struct node *val)
{
	struct queue *new;
	new=(struct queue *)malloc(sizeof(struct queue));
	new->data=val;
	new->next=NULL;
	if(rear==NULL)
	{
		rear=new;
	}
	else
	{
		while(rear->next!=NULL)
		{
			rear=rear->next;
		}
		rear->next=new;
	}
	
}
struct node *dequeue(){
struct node *t;
if(rear==NULL)
  printf("\nunderflow");
else
{ 
  t=rear->data;
  rear=rear->next;
}
return t;	
}
int main()
{
	int val;
	char ch;
	int opt;
	printf("1.create\n");
	printf("2.display\n");
	while(1)
	{
		printf("enter your option\n");
		scanf("%d",&opt);
		switch(opt){
		case 1:
			do{
			printf("enter a value\n");
			scanf("%d",&val);
			tree=insert(val);
			printf("do you want to enter more?\n");
			scanf(" %c",&ch);
			}while(ch=='y');
		break;
		case 2:
			level_order(tree);
			break;
}
	}
	return 0;
}
