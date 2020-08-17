#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void deepest_node_of_binary_tree(struct node *root);
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
void deepest_node_of_binary_tree(struct node *root){
	queue <struct node *> Q; 
	struct node *temp;
	if(root!=NULL){
		Q.push(root);
	}
	while(Q.empty()==false){
		temp=Q.front();
		Q.pop();
		if(temp->left){
			Q.push(temp->left);
		}
		if(temp->right){
			Q.push(temp->right);
		}	
	}
	
	cout<<"Deepest node of the binary tree is:\t"<<temp->data<<endl;
}
int main(){
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	deepest_node_of_binary_tree(root);
	return 0;
}
