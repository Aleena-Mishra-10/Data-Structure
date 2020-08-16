#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
int flag=0;
void preorder(struct node *root);
struct node *insert();
void findEleBinarytreeRecur(struct node *root,int key);
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
void findEleBinarytreeRecur(struct node *root,int key){
	//int flag=0;
	if(root==NULL){
		printf("Tree is empty\n"); 
	}
	if(root->data==key){
		flag=1;
		return ;
	}
	if(flag==0&&root->left!=NULL){
		findEleBinarytreeRecur(root->left,key);
	}
	if(flag==0&&root->right!=NULL){
		findEleBinarytreeRecur(root->right,key);
	}
	
}
int main(){
	struct node *root;
	int max,min,key;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	printf("enter a number to be searched\n");
	scanf("%d",&key);
	findEleBinarytreeRecur(root,key);
	if(flag==1){
		printf("The element is present\n");
	}
	else{
		printf("Element is not present\n");
	}
	
	return 0;
}
