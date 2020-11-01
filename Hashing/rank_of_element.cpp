#include<bits/stdc++.h>
using namespace std;

void find_rank(int a[],int n){
	map<int,int> mp;
	int newarr[n];
	copy(a, a + n, newarr);
	sort(newarr,newarr+n);
	int i,ele,rank=1;
	for(i=0;i<n;i++){
		int ele=newarr[i];
		if(mp[ele]==0){
			mp[ele]=rank;
			rank++;
		}
	}
	for(i=0;i<n;i++){
		int e = a[i];
		a[i]=mp[e];
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n=7;
	int a[]={10, 8, 15, 12, 6, 20, 1};
     find_rank(a, n); 
    return 0; 
}
