queue<long long int> rev(queue<long long int> q)
{
    stack<long long int> st;
    
    long long int n=q.size();
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
    
}
