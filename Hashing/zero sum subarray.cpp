ll findSubarray(vector<ll> arr, int n ) {
    unordered_map<int,int> m;
    int ans=0;
    int sum=0;
    m[sum]++;
    for(auto x:arr){
        sum+=x;
        m[sum]++;
    }
    for(auto x:m){
        int val=x.second;
        ans+=(val)*(val-1)/2;
    }
    return ans;
}
