class Solution {
  public:
    int findMaxLen(string S) {
        stack<int>s;
        int result=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                s.push(i);
            }
            else{
                s.pop();
                if(!s.empty()){
                    result=max(result,i-s.top());
                }
                else{
                    s.push(i);
                }
            }
        }
        return result;
    }
};
