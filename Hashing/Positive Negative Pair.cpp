vector <int> findPairs(int arr[], int n) 
{
    vector<int> ans;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            s.insert(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            int r=-arr[i];
            if(s.find(r)!=s.end()){
                ans.push_back(r);
                ans.push_back(arr[i]);
               
            }
        }
    }
    return ans;
}
