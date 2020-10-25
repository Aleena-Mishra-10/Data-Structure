map<int,int> mp;
// mp hold 1 to those number which consists of only 1, 2, 3 as digits only
bool hasDigit(int n){
    while(n){
        int r=n%10;
        if(r==0 || r>3){
            return false;
        }
        n=n/10;
    }
    return true;
}
void findAll() {
    for(int i=0;i<=1000000;i++){
        if(hasDigit(i)){
            mp[i]++;
        }
    }
}
