class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> r;
        r.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            int n = r.size()-1;
            if(r[n][1]<a[i][0]) r.push_back(a[i]);
            else r[n][1] = max(r[n][1],a[i][1]);
        }
        return r;
        
    }
};
