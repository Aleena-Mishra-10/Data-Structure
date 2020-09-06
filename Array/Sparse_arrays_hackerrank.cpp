vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res;
    for(int i=0;i<queries.size();i++){
        int count=0;
        for(int j=0;j<strings.size();j++){
            if(queries[i]==strings[j]){
                count++;
            }
        }
        res.push_back(count);
    }
    
    return res;
}
