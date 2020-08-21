#include <bits/stdc++.h> 
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};
int preIndex=0;
void inorder(node *root);
struct node *tree_from_inorder_preorder(int in[],int pre[],int is,int ie);

void inorder(node *root){
	if(!root){
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

struct node *tree_from_inorder_preorder(int in[],int pre[],int is,int ie){

	int i,inIndex;
	struct node *root;
	
	if(is>ie){
		return NULL;
	}
	root=(struct node*)malloc(sizeof(struct node));
	root->data=pre[preIndex];
	preIndex++;
	
	for(i=is;i<=ie;i++){
		if(in[i]==root->data){
			inIndex=i;
			break;	
		}
	}
	root->left=tree_from_inorder_preorder(in,pre,is,inIndex-1);
	root->right=tree_from_inorder_preorder(in,pre,inIndex+1,ie);
	return root;
}
int main()  
{   
	node *root;
    int in[] = {20,10,40,30,50};  
    int pre[] = {10,20,30,40,50}; 
    root=tree_from_inorder_preorder(in,pre,0,4);
    cout<<"Inorder traversal is:\n";
    inorder(root);
    return 0;
}

