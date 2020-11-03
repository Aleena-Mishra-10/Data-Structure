#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int j;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	       cin>>j;
	       v.push_back(j);
	    }
	    priority_queue<int,vector<int>,greater<int>> pq;
	    long long int sum1=0;
	    for(int i=0;i<n;i++){
	        pq.push(v[i]);
	    }
	    while(pq.size()>1){
	        int n1 = pq.top();
	        pq.pop();
	        int n2 = pq.top();
	        pq.pop();
	        sum1=sum1+n1+n2;
	        pq.push(n1+n2);
	    }
	    cout<<sum1<<endl;
	    
	}
	return 0;
}
