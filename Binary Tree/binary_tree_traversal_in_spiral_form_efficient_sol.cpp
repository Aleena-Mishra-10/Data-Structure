#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void printSpiral(struct node *root);

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

void printSpiral(struct node *root){
	if(root==NULL){
		return ;
	}
	stack <struct node *> s1;
	stack <struct node *> s2;
	s1.push(root);
	while(s1.empty()==false||s2.empty()==false){
		while(!s1.empty()){
			struct node *temp=s1.top();
			s1.pop();
			cout<<temp->data<<"\t";
			if(temp->left){
				s2.push(temp->left);
			}
			if(temp->right){
				s2.push(temp->right);
			}
		}
		cout<<endl;
		while(!s2.empty()){
			struct node *temp=s2.top();
			s2.pop();
			cout<<temp->data<<"\t";
			if(temp->right){
				s1.push(temp->right);
			}
			if(temp->left){
				s1.push(temp->left);
			}
		}
		cout<<endl;
	}
}

int main(){
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	cout<<"Binary tree in spiral form:\n";
	printSpiral(root);
	return 0;
}
