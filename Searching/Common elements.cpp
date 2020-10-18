class Solution
{
    public:    
       vector <int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
        {
           int i=0,j=0,k=0;
           int res;
           vector<int> v;
           while(i<n1&&j<n2&&k<n3){
                if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
                {
                        if(res!=ar1[i]){
                            res=ar1[i];
                        v.push_back(ar1[i]); 
                         i++; j++; k++;
                    }
                }
  
         // x < y 
         else if (ar1[i] < ar2[j]) 
             i++; 
  
         // y < z 
         else if (ar2[j] < ar3[k]) 
             j++; 
  
         // We reach here when x > y and z < y, i.e., z is smallest 
         else
             k++; 
           }
           return v;
        }

};
