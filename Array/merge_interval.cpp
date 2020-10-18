#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    pair<int,int> p[n];
	    for(auto &it:p){
	        cin>>it.first>>it.second;
	    }
	    sort(p,p+n);
	    vector<pair<int,int>> ans;
	    ans.push_back(p[0]);
	    for(int i=1;i<n;i++){
	        if(ans.back().second>=p[i].first){
	            ans.back().second=max(p[i].second,ans.back().second);
	        }
	        else{
	            ans.push_back(p[i]);
	        }
	    }
	    for(int i=0;i<ans.size();i++){
	        cout<<ans[i].first<<" "<<ans[i].second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
