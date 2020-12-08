#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,d;
	    cin>>n>>d;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    unordered_set<int> s;
	    for(int i=0;i<n;i++){
	        s.insert(a[i]);
	    }
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(s.find(d+a[i])!=s.end()){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	    cout<<1<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
