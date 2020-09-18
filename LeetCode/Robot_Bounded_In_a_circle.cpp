class Solution {
public:
    bool isRobotBounded(string instructions) {
        unordered_map<char,pair<char,char>> dir{{'N',{'W','E'}},{'S',{'E','W'}},{'E',{'N','S'}},{'W',{'S','N'}}};
         unordered_map<char,pair<int,int>> moves{{'N',{0,1}},{'S',{0,-1}},{'E',{1,0}},{'W',{-1,0}}};
        int i=0,j=0;
        char facing = 'N';
        for(auto ist:instructions){
            if(ist=='L'){
                facing=dir[facing].first;
            }
            else if(ist=='R'){
                facing=dir[facing].second;
            }
            else if(ist=='G'){
                i+=moves[facing].first;
                j+=moves[facing].second;
            }
        }
        if((i==0 and j==0) || facing !='N'){
            return true;
        }
        return false;
    }
};
