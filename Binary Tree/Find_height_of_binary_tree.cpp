#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int find_height_of_binary_tree(struct node *root);
struct node *insert(){
	int x;
	struct node *new_node=new node;
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
int find_height_of_binary_tree(struct node *root){
		int height=0;
	    if(root==NULL){
		      return 0;
	    }
	    else{
	     return max(find_height_of_binary_tree(root->left),find_height_of_binary_tree(root->right))+1;
		//return height;
	}
}
int main(){
	struct node *root;
	int max,min,height;
	root=NULL;
	root=insert();
	cout<<"Preorder traversal for the binary tree is:\n";
	preorder(root);
	height=find_height_of_binary_tree(root);
	cout<<"Height:\t"<<height;
	
	return 0;
}
