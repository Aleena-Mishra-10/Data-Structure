#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
int height_recursion(struct node *root);
int height_iterative(struct node *root);
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
		return max(height_recursion(root->left),(height_recursion(root->right)))+1;
	}
}
int height_iterative(struct node *root){
	if(root==NULL){
		return 0;
	}
	struct node *temp;
	queue <struct node *> Q;
	Q.push(root);
	int height = 0;
	while(1){
		int nodeCount;
		nodeCount=Q.size();

		if(nodeCount==0){
			return height;
		}
		
		height++;
				
		while(nodeCount>0){
			temp=Q.front();
			Q.pop();
			if(temp->left){
				Q.push(temp->left);
			}
			if(temp->right){
				Q.push(temp->right);
			}
			nodeCount--;
		}
	}
}
int main(){
	int h1 , h2;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	h1=height_recursion(root);
	cout<<"height found by recursion:\t"<<h1<<endl;
	h2=height_iterative(root);
    cout<<"height found by iterative method:\t"<<h2<<endl;
	return 0;
}
