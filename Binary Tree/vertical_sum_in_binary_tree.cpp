#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(int n);
struct node *create_bst(struct node *root,int n);
void preorder(struct node *root);
void verticalSum(struct node *root,int hd,map <int,int>&m);
void vertical(struct nodee *root);

struct node *create(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct node *create_bst(struct node *root,int n){
	if(root==NULL){
		return create(n);
	}
	 if (n < root->data){
	 	 root->left = create_bst(root->left, n);
	 }  
    else if (n > root->data) {
    	root->right = create_bst(root->right, n); 
	}
    return root; 
}
void preorder(struct node *root){
	if(root!=NULL){
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void vertical(struct node *root){
	map < int ,int> m;
	map <int ,int> :: iterator it;
	verticalSum(root,0,m);
	 for (it = m.begin(); it != m.end(); ++it) 
    { 
        cout << it->first << ": "<< it->second << endl; 
    } 
}
void verticalSum(struct node *root,int hd,map <int,int>&m){
	if(root==NULL){
		return ;
	}
	verticalSum(root->left,hd-1,m);
	m[hd] += root->data;
	verticalSum(root->right,hd+1,m);
}
int main(){
	int val,k;
	char ch;
	unordered_set<int> set;
	struct node *root=NULL;;
	do{
		cout<<"Enter an element:\n";
		cin>>val;
		root=create_bst(root,val);
		cout<<"Do you want to enter more?\n";
		cin>>ch;
	}while(ch=='y');
	preorder(root);
	vertical(root);
	return 0;
}
