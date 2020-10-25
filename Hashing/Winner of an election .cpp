vector<string> winner(string arr[],int n)
{
    map<string ,int> mp;
    int max_vote=0;
    string output;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(max_vote<mp[arr[i]]){
            max_vote=mp[arr[i]];
            output=arr[i];
        }
        if(max_vote==mp[arr[i]]){
            output=min(arr[i],output);
        }
    }
    string m=to_string(max_vote);
    vector<string> v;
    v.push_back(output);
    v.push_back(m);
    return v;
}
