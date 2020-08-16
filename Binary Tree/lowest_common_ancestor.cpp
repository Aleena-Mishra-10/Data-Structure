#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
struct node *findLCA(struct node *root,int n1,int n2);

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
struct node *findLCA(struct node *root,int n1,int n2){
	if(root==NULL){
		return NULL;
	}
	if(root->data==n1||root->data==n2){
		return root;
	}
	struct node *left,*right;
	left=findLCA(root->left,n1,n2);
	right=findLCA(root->right,n1,n2);
	if(left&&right){
		return root;
	}
	else{
		return (left?left:right);
	}
}
int main(){
	int n1,n2;
	struct node *root;
	struct node *temp;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"Enter two numbers whose ancestor you want to find:\n";
	cin>>n1>>n2;
	temp=findLCA(root,n1,n2);
	cout<<"ancestor is:\t"<<temp->data;
	return 0;
}
