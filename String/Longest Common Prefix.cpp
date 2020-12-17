string common(string a,string b)
    {string ans="";
        int x=a.length();
        int y=b.length();
        int z=min(x,y);
        for(int i=0;i<z;i++)
        {
            if(a[i]!=b[i])
                break;
            else 
               ans+=a[i];
        }
     return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string now;
        int si=strs.size();
        if(si==0)
            return "";
        
        else{now=strs[0];
        for(int p=1;p<strs.size();p++)
        {
            now=common(now,strs[p]);
        }
            }
        return now;
    }
