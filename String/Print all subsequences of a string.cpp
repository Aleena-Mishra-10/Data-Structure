#include<bits/stdc++.h>
using namespace std;

class gfg{
	vector<string> v;
	public:
		void findseq(string s,string ans){
			if(s.length()==0){
				v.push_back(ans);
				return;
			}
			findseq(s.substr(1,s.length()),ans+s[0]);
			findseq(s.substr(1,s.length()),ans);
		}
		void print(){
			for(int i=0;i<v.size();i++)
			cout<<v[i]<<endl;
		}
};
int main(){
	
	string s = "abcd";
        //findseq(s, ""); // Calling a function
    gfg g;
    g.findseq(s, "");
    g.print();
    return 0;
}
