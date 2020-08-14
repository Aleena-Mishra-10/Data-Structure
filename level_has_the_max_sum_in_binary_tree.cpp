#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void find_level_with_max_sum_meth1(struct node *root);
void find_level_with_max_sum_meth2(struct node *root);
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
void find_level_with_max_sum_meth1(struct node *root){
	struct node *temp;
	int l=0,maxl=0;
	queue <struct node *> Q;
	int curSum,maxSum=root->data;
	int s,i;
	if(!root){
		return ;
	}
	Q.push(root);
	//Q.push(NULL);
	while(Q.empty()==false){
		s=Q.size(),curSum=0;
		for(i=0;i<s;i++){
			temp=Q.front();
		    Q.pop();
			curSum+=temp->data;
			if(temp->left){
				Q.push(temp->left);
			}
			if(temp->right){
				Q.push(temp->right);
			}
		}
		if(curSum>maxSum){
			maxSum=curSum;
			maxl=l;
		}
		l++;
		
	}
	cout<< "Level with max sum is (meth1):\n"<<maxl; 
}
void find_level_with_max_sum_meth2(struct node *root){
	struct node *temp;
	int l=0,maxl=0;
	queue <struct node *> Q;
	int curSum=0,maxSum=root->data;
	int s,i;
	if(!root){
		return ;
	}
	Q.push(root);
	Q.push(NULL);
	while(Q.empty()==false){
		temp=Q.front();
	    Q.pop();
	    if(temp==NULL){
	    	if(curSum>maxSum){
			maxSum=curSum;
			maxl=l;
			}
			curSum=0;
			if(Q.empty()==false){
				Q.push(NULL);
			}
		   l++;
		}
		else{
			curSum+=temp->data;
			if(temp->left){
				Q.push(temp->left);
			}
			if(temp->right){
				Q.push(temp->right);
			}
		}
		
		
	}
	cout<< "\nLevel with max sum is (meth2):\n"<<maxl;
}
int main(){
	struct node *root;
	root=NULL;
	root=insert();
	printf("Preorder traversal for the binary tree is:\n");
	preorder(root);
	find_level_with_max_sum_meth1(root);
	find_level_with_max_sum_meth2(root);
	return 0;
}
