bool compare(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> v, int n) {
    int i;
    sort(v.begin(),v.end(),compare);
    for(i=1;i<v.size();i++){
        if(v[i].first<=v[i-1].second&&v[i-1].first!=-1){
            v[i].first=v[i-1].first;
            v[i].second=max(v[i].second,v[i-1].second);
            v[i-1].first=-1;
            i--;
        }
    }
    vector<pair<int,int>> res;
    for(i=0;i<v.size();i++){
        if(v[i].first!=-1){
            //res[i]=make_pair(v[i].first,v[i].second);
            res.push_back(v[i]);
        }
    }
    return res;
    
}
