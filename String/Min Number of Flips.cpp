#include <bits/stdc++.h>
using namespace std;



char flip(char ch) 
{ 
    return (ch == '0') ? '1' : '0'; 
} 
  
//  Utility method to get minimum flips when 
//  alternate string starts with expected char 
int getFlipWithStartingCharcter(string str, 
                                char expected) 
{ 
    int flipCount = 0; 
    for (int i = 0; i < str.length(); i++) 
    { 
        //  if current character is not expected, 
        // increase flip count 
        if (str[i] != expected) 
            flipCount++; 
  
        //  flip expected character each time 
        expected = flip(expected); 
    } 
    return flipCount; 
} 
  
// method return minimum flip to make binary 
// string alternate 
int minFlipToMakeStringAlternate(string str) 
{ 
    //  return minimum of following two 
    //  1) flips when alternate strign starts with 0 
    //  2) flips when alternate strign starts with 1 
    return min(getFlipWithStartingCharcter(str, '0'), 
               getFlipWithStartingCharcter(str, '1')); 
} 
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<minFlipToMakeStringAlternate(s)<<endl;
	}
	return 0;
}
