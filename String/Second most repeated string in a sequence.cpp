class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        string str="";
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(auto i:mp){
            max1=max(max1,i.second);
        }
        for(auto j:mp){
            if(j.second!=max1){
                max2=max(max2,j.second);
            }
        }
        for(auto k:mp){
            if(max2==k.second){
                str=k.first;
                break;
            }
        }
        return str;
    }
};
