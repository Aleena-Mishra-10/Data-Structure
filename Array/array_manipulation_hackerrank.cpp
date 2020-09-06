#include <bits/stdc++.h>

using namespace std;

const int NMAX = 1e7+2;
long long v[NMAX];
int main(){
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=m;i++){
        int a,b,k;
        cin>>a>>b>>k;
        v[a]+=k;
        if((b+1)<=n){
            v[b+1]-=k;
        }
    }
    long long int x=0,ans=INT_MIN;
    for(int i=1;i<=n;i++){
    x+=v[i];
    ans=max(ans,x);
    }
    cout<<ans<<"\n";
    return 0;
}
