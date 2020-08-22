#include <bits/stdc++.h> 
using namespace std; 

struct node{
	int data;
	struct node *left;
	struct node *right;
};
void inorder(struct node *root);
struct node *insert(int a[],struct node *root,int i,int n);

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

void inorder(struct node *root){
	if(root==NULL){return ;}
	
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);

}

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 6, 6, 6 }; 
    int n = 9; 
    struct node* root = NULL;
	root = insert(arr, root, 0, n); 
	cout<<"Inorder traversal of complete binary tree\n";
    inorder(root); 
} 
