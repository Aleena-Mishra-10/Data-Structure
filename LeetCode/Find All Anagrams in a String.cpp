class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pcount(26,0),scount(26,0),res;
        int n=s.size();
        int m=p.size();
        if(n<m) return res;
        for(int i=0;i<m;i++){
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        if(pcount==scount) res.push_back(0);
        for(int i=m;i<n;i++){
            scount[s[i]-'a']++;
            scount[s[i-m]-'a']--;
            if(scount==pcount){
                res.push_back(i-m+1);
            }
        }
        return res;
    }
};
