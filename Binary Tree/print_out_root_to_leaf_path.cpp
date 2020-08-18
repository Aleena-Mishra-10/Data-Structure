#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void printPathRecur(struct node *root,int path[],int pathlen);
void printArray(int arr[],int len);
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
void printPathRecur(struct node *root,int path[],int pathlen){
	if(root==NULL){
		return;
	}
	path[pathlen]=root->data;
	pathlen++;
	if(root->left==NULL&&root->right==NULL){
		printArray(path,pathlen);
	}
	else{
		printPathRecur(root->left,path,pathlen);
		printPathRecur(root->right,path,pathlen);	
	}	
}
void printArray(int arr[],int len){
	int i;
	for(i=0;i<len;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}
int main(){
	int path[50],pathlen=0;
	struct node *root;
	root=NULL;
	root=insert();
	cout<<"Preorder traversal for the binary tree is:\n";
	preorder(root);
	printPathRecur(root,path,pathlen);
	return 0;
}
