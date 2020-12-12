queue<ll> modifyQueue(queue<ll> q, int k)
{
   int i,j;
    queue<ll>nq;
    stack<ll>st;
    for(i=0;i<k;i++)
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(!st.empty())
    {
        int x= st.top();
        nq.push(x);
        st.pop();
    }
    while(!q.empty())
    {
        int x=q.front();
        nq.push(x);
        q.pop();
    }
    return nq;
}
