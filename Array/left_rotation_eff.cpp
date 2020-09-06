#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,d;
    cin>>n>>d;
    int v[n];
    for(int i=0; i<n;i++) {
        int t,index;
        cin>>t;
        index=(i+n-d)%n;
        v[index]=t;
        }
   
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
