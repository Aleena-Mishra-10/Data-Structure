#include <bits/stdc++.h>
using namespace std;

bool match(char *first, char *second) 
{ 
    // If we reach at the end of both strings, we are done 
    if (*first == '\0' && *second == '\0') 
        return true; 
  
    // Make sure that the characters after '*' are present 
    // in second string. This function assumes that the first 
    // string will not contain two consecutive '*' 
    if (*first == '*' && *(first+1) != '\0' && *second == '\0') 
        return false; 
  
    // If the first string contains '?', or current characters 
    // of both strings match 
    if (*first == '?' || *first == *second) 
        return match(first+1, second+1); 
  
    // If there is *, then there are two possibilities 
    // a) We consider current character of second string 
    // b) We ignore current character of second string. 
    if (*first == '*') 
        return match(first+1, second) || match(first, second+1); 
    return false; 
} 

int main() {
	int x;
    cin>>x;
    while(x--){
    string pat,str;
    cin>>pat>>str;
    int n=pat.length();
    int m=str.length();
    char first[n+1],second[m+1];
    strcpy(first ,pat.c_str());
    strcpy(second ,str.c_str());
    bool r=match(first,second);
    if(r){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    }
	return 0;
}
