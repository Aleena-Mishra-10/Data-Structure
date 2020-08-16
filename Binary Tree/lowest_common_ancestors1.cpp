#include <iostream> 
#include<bits/stdc++.h>
#include <vector>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int LCA1(struct node *root);
bool findPath(struct node *root,vector<int> &p,int n);

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

bool findPath(struct node *root,vector <int> &p,int n){
	if(root==NULL){
		return false;
	}
	p.push_back(root->data);
	if(root->data==n){
		return true;
	}
	if((root->left && findPath(root->left, p, n))||(root->right && findPath(root->right, p, n))){
		return true;
	}
	p.pop_back();
	return false;
}

int LCA1(struct node *root){
	vector<int> path1,path2;
	int n1,n2;
	cout<<"Enter two number whose lowest common ancestor you want to find:\n";
	cin>>n1>>n2;
	if(findPath(root,path1,n1)==false||findPath(root,path2,n2)==false){
		return -1;
	}
	int i;
 
    for (i = 0; i < path1.size() && i < path2.size() ; i++) 
        if (path1[i] != path2[i]) 
            break; 
    return path1[i-1];
}

int main(){
	
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"The lowest common ancestor is:\n"<<LCA1(root);
	return 0;
}
