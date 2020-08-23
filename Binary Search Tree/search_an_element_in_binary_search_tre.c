#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root;
void create();
void create_bst(int n);
void preorder(struct node *root);
struct node *search_element(struct node *root,int key);
void create(){
	root=NULL;
}

void create_bst(int n){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = n;
	new_node->left = NULL;
	new_node->right = NULL;
	struct node *child;
	struct node *ptr;
	if(root==NULL){
		root=new_node;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		ptr=NULL;
		child = root;
		while(child!=NULL){
			ptr=child;
			if(n<child->data){
				child=child->left;
			}
			else{
				child=child->right;
			}
		}
		if(n<ptr->data){
			ptr->left=new_node;
		}
		else
		{
			ptr->right=new_node;
		}
	}
}
void preorder(struct node *root){
	if(root==NULL){
		return ;
	}
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}

struct node *search_element(struct node *root,int key){
	if(root==NULL){
		return root;
	}
	if(key<root->data){
		return search_element(root->left,key);
	}
	else if(key>root->data){
		return search_element(root->right,key);
	}
	return root;
}
int main(){
	int key,val;
	char ch;
	struct node *t;
	do
	{
	printf("enter a number");
	scanf("%d",&val);
	create_bst(val);
	printf("do you want to enter more?\n");
	scanf(" %c",&ch);
	}while(ch=='y');
	preorder(root);
	printf("enter an element:\n");
	scanf("%d",&key);
	t=search_element(root,key);
	if(root){
		printf("found");
	}
	else{
		printf("not found");
	}	
}
