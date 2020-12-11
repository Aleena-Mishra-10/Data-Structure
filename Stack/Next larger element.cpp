vector <long long> nextLargerElement(long long arr[], int n){
    stack<long long> st;
    vector<long long> v(n);
    int idx=n-2;
    v[n-1]=-1;
    st.push(n-1);
    while(idx>=0){
        while(st.size()&&arr[st.top()]<=arr[idx]){
            st.pop();
        }
        if(st.empty()){
            v[idx]=-1;
        }
        else{
            v[idx]=arr[st.top()];
        }
        st.push(idx);
        idx--;
    }
    return v;
}
