#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

int main(){
    int n,q;
    int lastans=0;
    cin>>n>>q;
    vector<vector<int>> seq(n);
    for(int i=0;i<q;i++){
        int a;
        long long int x,y;
         cin>>a>>x>>y;
         int t=((x^lastans)%n);
         if(a==1){
             seq[t].push_back(y);
         }
         else{
             long long int size=seq[t].size();
             long long b;
            if (size != 0)
                b = y%size;
            else
                seq[t].push_back(y);
            cout << seq[t][b] << endl;
            lastans =seq[t][b];
             
         }

    }

}

