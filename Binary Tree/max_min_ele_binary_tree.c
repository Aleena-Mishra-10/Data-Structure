#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
//struct node *tree=NULL;
void preorder(struct node *root);
struct node *insert();
int findmax(struct node *root);
int findmin(struct node *root);
struct node *insert(){
	int x;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	printf("enter an element: (-1 for no node)\n");
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
int findmax(struct node *root){
	int max,left,right,root_val;
	max=INT_MIN;
	if(root!=NULL){
		root_val=root->data;
		left=findmax(root->left);
		right=findmax(root->right);
		if(left>right){
			max=left;
		}
		else{
			max=right;
		}
		if(root_val>max){
			max=root_val;
		}
	}
	return max;
}
int findmin(struct node *root){
	int min,left,right,root_val;
	min=INT_MAX;
	if(root!=NULL){
		root_val=root->data;
		left=findmin(root->left);
		right=findmin(root->right);
		if(left<right){
			min=left;
		}
		else{
			min=right;
		}
		if(root_val<min){
			min=root_val;
		}
	}
	return min;
}
int main(){
	struct node *root;
	int max,min;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	printf("Maximum element in the binary tree:\n");
	max=findmax(root);
	printf("%d\n",max);
	printf("Minimum element in the binary tree:\n");
	min=findmin(root);
	printf("%d",min);
	
}
