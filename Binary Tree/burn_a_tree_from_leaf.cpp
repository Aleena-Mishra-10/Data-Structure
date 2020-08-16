#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
int res=0;
void preorder(struct node *root);
struct node *insert();
int burnTree(struct node *root,int leaf,int &dist);
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

int burnTree(struct node *root,int leaf,int &dist){
	if(root==NULL){
		return 0;
	}
	if(root->data==leaf){
		dist=0;
		return 1;
	}
	int ldist=-1,rdist=-1;
	int lh=burnTree(root->left,leaf,ldist);
	int rh=burnTree(root->right,leaf,rdist);
	if(ldist!=-1){
		dist=ldist+1;
		res=max(res,dist+rh);
	}
	else if(rdist!=-1){
		dist=rdist+1;
		res=max(res,dist+lh);
	}
	return max(lh,rh)+1;
}



int main(){
	int leaf,dist;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"Enter the leaf node from which you want to start burning:\n";
	cin>>leaf;
	burnTree(root,leaf,dist);
	cout<<"The time required is:\t"<<res;
	return 0;
}
