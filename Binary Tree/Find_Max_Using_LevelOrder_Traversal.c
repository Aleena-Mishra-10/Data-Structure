#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct queue{
	struct node *data;
	struct queue *next;
};
struct queue *rear = NULL;
struct node *tree = NULL;
//void front_init(struct queue *qp);
struct node *insert(int val);
void enqueue(struct node *val);
void find_max_using_levelorder(struct node *tree);
struct node *dequeue();
struct node *insert(int val){
	struct node *parentptr,*childptr;
	struct node *new_node = (struct node *)malloc(sizeof(struct node*));
	new_node->data=val;
	new_node->left=NULL;
	new_node->right=NULL;
	if(tree==NULL){
		tree=new_node;
		tree->left=NULL;
		tree->right=NULL;
	}
	else{
		parentptr=NULL;
		childptr=tree;
		while(childptr!=NULL){
			parentptr=childptr;
			if(val<childptr->data){
				childptr=childptr->left;
			}
			else{
				childptr=childptr->right;
			}
		}
		if(val<parentptr->data){
			parentptr->left=new_node;
		}
		else{
			parentptr->right=new_node;
		}
		
	}
	return tree;
	
}
void enqueue(struct node *val){
	struct queue *new;
	new=(struct queue *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(rear==NULL){
		rear=new;
	}
	else{
		while(rear->next!=NULL){
			rear=rear->next;
		}
		rear->next=new;
	}
}
struct node *dequeue(){
	struct node *t;
	if(rear==NULL){
		printf("\nunderflow");
	}
	else{
		 t=rear->data;
         rear=rear->next;
	}
        return t; 	
}
void find_max_using_levelorder(struct node *tree){
	struct node *t=tree;
	struct node *x;
	int max=INT_MIN;
	if(t!=NULL){
		enqueue(t);
	}
	while(rear!=NULL){
		x=dequeue();
		if(max<x->data){
			max=x->data;
		}
		if(x->left)
		{
		enqueue(x->left);
		}
		if(x->right)
		{
			enqueue(x->right);
		}
	}
	printf("Maximum element is:%d\n",max);
}
int main()
{
	int val;
	char ch;
	int opt;
	printf("1.create\n");
	printf("2.find max element\n3.exit\n");
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
			find_max_using_levelorder(tree);
			break;
		case 3:
			exit(0);
			break;
}
	}
	return 0;
}

