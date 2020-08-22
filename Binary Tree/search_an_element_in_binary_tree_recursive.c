#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int search_element(struct node *root,int data);

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

int search_element(struct node *root,int key){
	if(root==NULL){
		return 0;
	}
	if(root->data==key){
		return 1;
	}
	int res1 = search_element(root->left,key);
	if(res1==1){
		return res1;
	}
	int res2 = search_element(root->right,key);
	return res2;
}

int main(){
	int key,n;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	printf("Enter an element to search:\n");
	scanf("%d",&key);
	n=search_element(root,key);
	if(n){
		printf("found");
	}
	else{
		printf("not found");
	}
	return 0;
}
