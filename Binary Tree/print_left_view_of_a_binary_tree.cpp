#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
int maxLevel=0;
void preorder(struct node *root);
struct node *insert();
void print_left_view_of_binary_tree(struct node *root,int level);
void print_left_view_of_binary_tree(struct node *root);

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
void print_left_view_binary_tree(struct node *root,int level){
	if(!root){
		return;
	}
	if(maxLevel<level){
		cout<<root->data<<"\t";
		maxLevel=level;
	}

	print_left_view_binary_tree(root->left,level+1);
	print_left_view_binary_tree(root->right,level+1);
		
}

void print_left_view_of_binary_tree(struct node *root){
	if(!root){
		return;
	}
	queue <struct node *> Q;
	struct node *temp;
	Q.push(root);
	while(Q.empty()==false){
		int nodeCount,i;
		nodeCount=Q.size();
		for(i=0;i<nodeCount;i++){
			temp=Q.front();
			Q.pop();
			if(i==0){
				cout<<temp->data<<"\t";
			}
			if(temp->left){
				Q.push(temp->left);
			}
			if(temp->right){
				Q.push(temp->right);
			}
		}
	}
}

int main(){
	int l=1;
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"Left view of the tree is:\n";
	print_left_view_binary_tree(root,l);
	cout<<"\nLeft view of the tree is:\n";
	print_left_view_of_binary_tree(root);
	return 0;
}
