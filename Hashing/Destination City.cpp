class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        if(paths.size()==0) return "";
        unordered_map<string,string> hash;
        for(auto v:paths)
            hash[v[0]] = v[1];
        
        
        string src = paths[0][0];
        string dest;
        
        while(hash.find(src)!=hash.end())
        {
            dest = hash[src];
            src = dest;
        }
        return dest;
    }
};
