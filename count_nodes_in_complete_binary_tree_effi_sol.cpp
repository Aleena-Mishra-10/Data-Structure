#include <bits/stdc++.h> 
using namespace std; 

struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert(int a[],struct node *root,int i,int n);
int count(struct node *root);//efficient solution

struct node *insert(int a[],struct node *root,int i,int n){
	
	if(i<n){
			struct node *new_node=(struct node*)malloc(sizeof(struct node));
			new_node->data=a[i];
			new_node->left=NULL;
			new_node->right=NULL;
			root=new_node;
			// insert left child 
            root->left = insert(a,root->left, 2 * i + 1, n); 
            // insert right child 
            root->right = insert(a,root->right, 2 * i + 2, n); 
	}
	return root; 
}

void preorder(struct node *root){
	if(root==NULL){return ;}
	
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);

}

int count(struct node *root){
	int rh=0,lh=0;
	struct node *cur=root;
	while(cur!=NULL){
		lh++;
		cur=cur->left;
	}
	cur=root;
	while(cur!=NULL){
		rh++;
		cur=cur->right;
	}
	if(lh==rh){
		return (pow(2,lh)-1);
	}
	return 1+count(root->left)+count(root->right);
}

int main(){

	int arr[] = { 1, 2, 3, 4, 5, 6, 6, 6, 6 }; 
    int n = 9; 
    struct node* root = NULL;
	root = insert(arr, root, 0, n);
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"No of nodes:\t"<<count(root);
	return 0;
}
