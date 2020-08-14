//The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
// This path may or may not pass through the root.
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
//int res=0;
struct node *insert();
void preorder(struct node *root);
int diameter(struct node *root,int &res);//O(n) , efficient solution
struct node *insert(){
	int x;
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
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
int diameter(struct node *root,int &res){
	if(root==NULL){
		return 0;
	}
	int lh=0,rh=0;
	lh=diameter(root->left,res);
	rh=diameter(root->right,res);
	res=max(res,lh+rh+1);
	return 1+max(lh,rh);
}
int main(){
	struct node *root;
	int dia=1;
	root=NULL;
	root=insert();
	cout<<"Preorder traversal for the binary tree is:\n";
	preorder(root);
	diameter(root,dia);
	cout<<"Diameter of the binary tree:\n"<<dia;
	return 0;
}
