vector<int> leaders(int arr[], int n){
    
    vector<int> v;
    int max=arr[n-1];
    v.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(max<=arr[i]){
            max=arr[i];
            v.push_back(max);
        }
    }
    std::reverse(std::begin(v), std::end(v));
    return v;
}
