#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int check_1(struct node *root);//O(n)
int check_2(struct node *root);//O(n^2)
int height_recursion(struct node *root);

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
int height_recursion(struct node *root){
	//int h;
	if(root==NULL){
		return 0;
	}
	else {
		return max((height_recursion(root->left)),(height_recursion(root->right)))+1;
	}
}

int check_1(struct node *root){
	if(root==NULL){
		return 0;
	}
	int lh = check_1(root->left);
	if(lh==-1){
		return -1;
	}
	int rh = check_1(root->right);
	if(rh==-1){
		return -1;
	}
	if(abs(lh-rh)>1){
		return -1;
	}
	return max(lh,rh)+1;
}

int check_2(struct node *root){
	if(root==NULL){
		return 1;
	}
	int lh=height_recursion(root->left);
	int rh=height_recursion(root->right);
	return (abs(lh-rh)<=1&&check_2(root->left)&&check_2(root->right));
}

int main(){

	int f1,f2;
	int d;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	f1=check_1(root);
	f1?cout<<"Yes":cout<<"No";
	cout<<"\n";
	f2=check_2(root);
	f2?cout<<"Yes":cout<<"No";
	return 0;
}
