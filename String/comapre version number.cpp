class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> list1;
        vector<string> list2;
        string t1,t2;
        char del='.';
        istringstream token1(version1);
        while(getline(token1,t1,del)){
            list1.push_back(t1);
        }
        istringstream token2(version2);
        while(getline(token2,t2,del)){
            list2.push_back(t2);
        }
        int l1=list1.size();
        int l2=list2.size();
        int i1,i2;
        for(int i=0;i<max(l1,l2);i++){
            i1= i<l1 ? stoi(list1[i]):0;
            i2= i<l2 ? stoi(list2[i]):0;
            if(i1!=i2){
                return (i1>i2)? 1:-1;
            }
        }
        return 0;
    }
};
