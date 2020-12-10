#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int p,sum;
    sort(a,a+n);
    for(int i=0;i<q;i++){
        cin>>p;
        sum=0;
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]<=p){
                count++;
                sum+=a[j];
            }
        }
        cout<<count<<" "<<sum<<endl;
        }
    
    return 0;
}
