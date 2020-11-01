#include<bits/stdc++.h>
using namespace std;

void missing(int a[],int n,int s,int e){
	unordered_set<int>mp; 
    for (int i = 0; i < n; i++) 
        mp.insert(a[i]); 
    int x;
    for (x = s; x <= e; x++) 
        if (mp.find(x) == mp.end()) 
            cout << x << " "; 
}
int main(){
	int n=5,s=1,e=5;
	int a[]={1, 2, 3, 8, 9};
	missing(a,n,s,e); 
    return 0; 
}
