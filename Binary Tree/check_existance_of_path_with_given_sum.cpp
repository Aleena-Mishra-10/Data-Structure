#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
int sum=0;
stack <int> s;
struct node *insert();
void preorder(struct node *root);
void hasPath(struct node *root,int key);
void printPath(stack <int> s);
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
void hasPath(struct node *root,int key){
	if(root==NULL){
		return ;
	}

	sum=sum+root->data;
	s.push(root->data);
	if(sum==key){
		printPath(s);
	}
	hasPath(root->left,key);
	hasPath(root->right,key);
	sum=sum-(root->data);
	s.pop();		
}
void printPath(stack <int> s){
	while(!s.empty()){
		cout<<"\t"<<s.top();
		s.pop();
	}
}
int main(){
	int key;
	struct node *root;
	root=NULL;
	root=insert();
	cout<<"Preorder traversal for the binary tree is:\n";
	preorder(root);
	cout<<"Enter a value whose path of sum of element you want to calculate:\n";
	cin>>key;
	hasPath(root,key);
	return 0;
}
