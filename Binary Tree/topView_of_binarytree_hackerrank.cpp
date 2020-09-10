void fillmap(Node *root,int d,int l,map<int,pair<int,int>>&m){
        if(root==NULL){
            return ;
        }
        if(m.count(d)==0){
            m[d] = make_pair(root->data,l);
        }
        else if(m[d].second>l){
            m[d] = make_pair(root->data,l);
        }
        fillmap(root->left,d-1,l+1,m);
        fillmap(root->right,d+1,l+1,m);
    }

    void topView(Node * root) {
        map<int,pair<int,int>> m;

        fillmap(root,0,0,m);

        for(auto it=m.begin();it!=m.end();it++){
            cout<<it->second.first<<" ";
        }

    }
