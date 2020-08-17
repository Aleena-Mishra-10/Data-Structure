#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void vsumR(struct node *root,int hd,map<int,int> &mp);
void sum(struct node *root);

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
void vsumR(struct node *root,int hd,map<int,int> &mp){
	if(root==NULL){
		return ;
	}
	vsumR(root->left,hd-1,mp);
	mp[hd]+=root->data;
	vsumR(root->right,hd+1,mp);
}
void vsum(struct node *root){
	map<int,int> mp;
	map<int, int>::iterator itr;
	vsumR(root,0,mp);
	cout<<"Sum is:\n";
	for(itr = mp.begin(); itr != mp.end(); ++itr){
		cout<<(itr->second)<<endl;
	}
}

int main(){
	int n;
	struct node *root;
	struct node *temp;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	vsum(root);
	return 0;
	
}
	
	
