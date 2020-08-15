#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *prev=NULL;
void preorder(struct node *root);
struct node *insert();
struct node *BT_TO_DDL(struct node *root);

struct node *insert(){
	int x;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element (-1 for no node):\n");
	scanf("%d",&x);
	if(x==-1){
		return NULL;
	}
	new_node->data=x;
	printf("Enter left child for %d element\n",x);
	new_node->left=insert();
	printf("Enter right child for %d element\n",x);
	new_node->right=insert();
	return new_node;
}
void preorder(struct node *root){
	if(root==NULL){return ;}
	
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
}

struct node *BT_TO_DDL(struct node *root){
	if(root==NULL){
		return NULL;
	}
	struct node *head=BT_TO_DDL(root->left);
	if(prev==NULL){
		head=root;
	}
	else{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	BT_TO_DDL(root->right);
	return head;
}

int main(){
	int d;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	BT_TO_DDL(root);
	return 0;
}
