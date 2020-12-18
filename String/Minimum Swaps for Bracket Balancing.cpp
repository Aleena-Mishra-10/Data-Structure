#include <bits/stdc++.h>
using namespace std;

void balanceIT(string str,int n){
    
    stack<char> st;
    int c=0,j;
    for(int i=0;i<n;i++){
        if(str[i]=='['){
            st.push('[');
        }
        else if(str[i]==']' && st.empty()==false && st.top()=='['){
            st.pop();
        }
        else if(str[i]==']'){
            j=i+1;
            while(str[j]!='['){
                j++;
            }
            if(str[j]=='['){
                swap(str[i],str[j]);
                c+=(j-i);
                st.push(str[i]);
            }
        }
    }
    cout<<c<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    balanceIT(str,n);
	}
	return 0;
}
