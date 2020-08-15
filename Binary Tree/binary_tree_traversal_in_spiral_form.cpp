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
		return;
	}
	struct node *temp;
	bool reverse = false;
	queue <struct node *> Q;
	stack <int> S;
	Q.push(root);
	while(Q.empty()==false){
		int size=Q.size();
		int i;
		for(i=0;i<size;i++){
			temp=Q.front();
			Q.pop();
			if(reverse){
				S.push(temp->data);
			}
			else{
				cout<<temp->data<<"\t";
			}
			if(temp->left){
				Q.push(temp->left);
			}
			if(temp->right){
				Q.push(temp->right);
			}
		}
		if(reverse){
			while(S.empty()==false){
				
				cout<<S.top()<<"\t";
				S.pop();
			}
		}
		cout<<endl;
		reverse=!reverse;
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
