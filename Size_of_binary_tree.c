#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int size_of_binary_tree(struct node *root);
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
int size_of_binary_tree(struct node *root){
	int size=0;
	if(root==NULL){
		return 0;
	}
	else{
		size=size_of_binary_tree(root->left)+1+size_of_binary_tree(root->right);
		return size;
	}
	
}

int main(){
	struct node *root;
	int max,min,size;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	size=size_of_binary_tree(root);
	printf("Size:%d\t",size);
	
	return 0;
}

