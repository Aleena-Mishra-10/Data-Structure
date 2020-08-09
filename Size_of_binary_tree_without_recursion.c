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
struct node *root = NULL;
struct node *insert(int val);
void enqueue(struct node *val);
struct node *dequeue();
void find_size_of_binary_tree_without_recursion(struct node *root);
struct node *insert(int val){
	struct node *parentptr,*childptr;
	struct node *new_node = (struct node *)malloc(sizeof(struct node*));
	new_node->data=val;
	new_node->left=NULL;
	new_node->right=NULL;
	if(root==NULL){
		root=new_node;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		parentptr=NULL;
		childptr=root;
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
	return root;
	
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
void find_size_of_binary_tree_without_recursion(struct node *root){
	struct node *t=root;
	struct node *x;
	int count=0;
	if(t!=NULL){
		enqueue(t);
	}
	while(rear!=NULL){
		x=dequeue();
		count++;
		if(x->left)
		{
		enqueue(x->left);
		}
		if(x->right)
		{
			enqueue(x->right);
		}
		
	}
	printf("Size of binary tree is:\t%d",count);
}
int main(){
	int val;
	char ch;
	    do{
			printf("enter a value\n");
			scanf("%d",&val);
			root=insert(val);
			printf("do you want to enter more?\n");
			scanf(" %c",&ch);
			}while(ch=='y');
		find_size_of_binary_tree_without_recursion(root);
		return 0;
}
