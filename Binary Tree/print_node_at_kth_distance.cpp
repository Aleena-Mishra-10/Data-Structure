#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void print_node_at_kth_distance(struct node *root,int k);

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
void print_node_at_kth_distance(struct node *root,int k){
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<"\n";
	}
	else{
		print_node_at_kth_distance(root->left,k-1);
		print_node_at_kth_distance(root->right,k-1);	
	}
}
int main(){
	int d;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"Enter the distance\n";
	cin>>d;
	cout<<"Node/Nodes are:\n";
	print_node_at_kth_distance(root,d);
	return 0;
}
