#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
bool checking_of_children_sum_property(struct node *root);

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

bool checking_of_children_sum_property(struct node *root){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL&&root->right==NULL){
		return true;
	}
	int sum=0;
	if(root->left!=NULL){
		sum+=root->left->data;
	}
	if(root->right!=NULL){
		sum+=root->right->data;
	}
	return(root->data==sum&&checking_of_children_sum_property(root->left)&&checking_of_children_sum_property(root->right));
}

int main(){
	bool res;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	res=checking_of_children_sum_property(root);
	if(res){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
