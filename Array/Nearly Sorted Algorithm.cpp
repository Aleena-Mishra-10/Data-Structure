#include <bits/stdc++.h>
using namespace std;
//The Min Heap based method takes O(nLogk) time and uses O(k) auxiliary space
int main() {
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    priority_queue<int,vector<int>,greater<int>> pq(a,a+k);
	    int index=0;
	    for(int l=k;l<n;l++){
	        a[index++]=pq.top();
	        pq.pop();
	        pq.push(a[l]);
	    }
	    while(pq.empty()==false){
	        a[index++]=pq.top();
	        pq.pop();
	    }
	    for(int m=0;m<n;m++){
	        cout<<a[m]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
