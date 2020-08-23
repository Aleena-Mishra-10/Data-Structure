#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
void create_bst(int n);
void preorder(struct node *root);
struct node *find_floor(int key);

void create_bst(int n){
	struct node *ptr;
	struct node *child;
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data=n;
	new_node->left=NULL;
	new_node->right=NULL;
	if(root==NULL){
		root=new_node;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		ptr=NULL;
		child=root;
		while(child!=NULL){
			ptr=child;
			if(child->data>n){
				child=child->left;
			}
			else{
				child=child->right;
			}
		}
		if(n<ptr->data){
			ptr->left=new_node;
		}
		else{
			ptr->right=new_node;
		}
	}
}
void preorder(struct node *root){
	if(root==NULL){
		return ;
	}
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
struct node *find_floor(int key){
	struct node *res=NULL;
	struct node *t=root;
	if(root==NULL){
		return NULL; 
	}
	while(t!=NULL){
		if(t->data==key){
			return t;
		}
		if(t->data>key){
			t=t->left;
		}
		else{
			res=t;
			t=t->right;
		}
	}
	return res;
}
int main(){
	int val,key;
	char ch;
	struct node *t;
	do{
		cout<<"Enter an element:\n";
		cin>>val;
		create_bst(val);
		cout<<"Do you want to enter more?\n";
		cin>>ch;
	}while(ch=='y');
	preorder(root);
	cout<<"Enter an element whose floor you want to find\n";
	cin>>key;
	t=find_floor(key);
	cout<<"Floor is:\t"<<t->data;
	return 0;
}
