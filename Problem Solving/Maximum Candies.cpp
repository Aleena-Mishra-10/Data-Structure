#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        if(n == 1 && m == 1) {
            cout << x << endl; 
        } else {
            x = min(x, y);
            y = min(y, 2 * x);
            cout << (n * m + 1) / 2 * x + (n * m) / 2 * (y - x) << endl;
        }
    }
}
