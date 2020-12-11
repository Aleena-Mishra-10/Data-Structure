bool ispar(string x)
{
    stack<char> s;

    for(auto c:x){
        if(c=='('){
            s.push(')');
        }
        else if(c=='{'){
            s.push('}');
        }
        else if(c=='['){
            s.push(']');
        }
        else if(s.empty()||s.top()!=c){
            return false;
        }
         else if(s.top() == c){
            s.pop();
         }
    }
    return s.empty();
}
