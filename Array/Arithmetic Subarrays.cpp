class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> v(l.size(),true);
        for(int i=0;i<l.size();i++){
            if(r[i]-l[i]<2){
                //v.push_back(true);
                continue;
            }
            vector<int> vect(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(vect.begin(),vect.end());
            int diff=vect[1]-vect[0];
            for(int j=1;j<vect.size()-1;j++){
                if(diff!=vect[j+1]-vect[j]){
                    v[i]=false;
                    break;
                }
            }
        }
        return v;
    }
};
