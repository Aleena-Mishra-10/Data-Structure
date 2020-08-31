#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	int hd;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void topview(struct node *root);
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
void topview(struct node *root){
	if(root==NULL){
		return;
	}
	queue<struct node*> q;
	map <int ,int> m;
	int hd=0;
	root->hd=0;
	q.push(root);
	cout<<"Top view of the tree is:";
	while(q.size()){
		hd=root->hd;
		if(m.count(hd)==0){
			m[hd]=root->data;
		}
		if(root->left){
			root->left->hd=hd-1;
			q.push(root->left);
		}
		if(root->right){
			root->right->hd=hd+1;
			q.push(root->right);
		}
		q.pop();
		root=q.front();
	}
	for(auto i=m.begin();i!=m.end();i++){
		cout<<i->second<<"\t";
	}
}
int main(){
	
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	topview(root);
	return 0;
	
}
