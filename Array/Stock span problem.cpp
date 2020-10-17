#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    stack<int> st;
	    st.push(0);
	    int s[n];
	    s[0]=1;
	    for(int i=1;i<n;i++){
	     while (!st.empty() && a[st.top()] <= a[i]) 
           {
               st.pop(); 
           }
        // If stack becomes empty, then price[i] is 
        // greater than all elements on left of it, 
        // i.e., price[0], price[1], ..price[i-1].  Else 
        // price[i] is greater than elements after 
        // top of stack 
        s[i] = (st.empty()) ? (i + 1) : (i - st.top()); 
  
        // Push this element to stack 
        st.push(i);
	    }
	    for(int i=0;i<n;i++){
	        cout<<s[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
