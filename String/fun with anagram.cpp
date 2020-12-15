#include<bits/stdc++.h>
using namespace std;

string findkey(string k);
vector<string> funwithanagram(vector<string> s);

string findkey(string k){

	string arr=k;
	sort(arr.begin(),arr.end());
	return arr;
}

vector<string> funwithanagram(vector<string> s){
	vector<string> ans;
	unordered_set<string> found;
	for(int i=0;i<s.size();i++){
		string word=s[i];
		string key=findkey(word);
		if(found.find(key)==found.end()){
			ans.push_back(word);
			found.insert(key);
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
}

int main(){
	vector<string> b;
	vector<string> res;
	b.push_back("code");
	b.push_back("aaagmnrs");
	b.push_back("anagrams");
	b.push_back("doce");
	res=funwithanagram(b);
	for(string r:res){
		cout<<r<<endl;
	}
	
	return 0;
}
