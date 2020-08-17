#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void preorder(struct node *root);
struct node *insert();
void verticalTraversal(struct node *root);

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
void verticalTraversal(struct node *root){
	map<int , vector<int>> mp;
	map<int, vector<int>>::iterator itr; 
	queue<pair<struct node *,int>> Q;
	Q.push({root,0});
	while(Q.empty()==false){
		auto p=Q.front();
		struct node *t=p.first;
		int hd=p.second;
		mp[hd].push_back(t->data);
		Q.pop();
		if(t->left){
			Q.push({t->left,hd-1});
		}
		if(t->right){
			Q.push({t->right,hd+1});
		}
	}
	 for (itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout<<(*itr).first<<":";
        vector <int> v=(*itr).second;
        unsigned j;
        for(j=0;j<v.size();j++){
        	cout<<v[j]<<" ";
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
	cout<<"Vertical traversal of the tree is:\n";
	verticalTraversal(root);
	return 0;
	
}
