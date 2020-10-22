int firstRepeated(int arr[], int n) {
     unordered_set<int> s;
     int mi=INT_MIN;
     for(int i=n-1;i>=0;i--){
         if(s.find(arr[i])!=s.end()){
             mi=i;
         }
         else{
             s.insert(arr[i]);
         }
     }
     return (mi==INT_MIN ? -1:mi+1);
}
