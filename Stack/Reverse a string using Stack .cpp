char* reverse(char *S, int len)
{
    stack<char> s;
    int n=len-1;
    for(int i=0;i<=n;i++){
        s.push(S[i]);
    }
    for(int i=0;i<=n;i++){
        S[i]=s.top();
        s.pop();
    }
    return S;
}
