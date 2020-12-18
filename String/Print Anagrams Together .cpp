vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    vector<vector<string>> v;
    unordered_map<string,vector<string>> ans;
    unordered_map<string,int> mp;
    for(int i=0;i<string_list.size();i++){
        string s=string_list[i];
        sort(s.begin(),s.end());
        if(mp.find(s)!=mp.end()){
            ans[s].push_back(string_list[i]);
        }
        else{
            mp[s]++;
            ans[s].push_back(string_list[i]);
        }
    }
    for(auto x:ans){
        v.push_back(x.second);
    }
    return v;
}
