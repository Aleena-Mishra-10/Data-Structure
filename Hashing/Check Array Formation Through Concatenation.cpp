class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
         // Stores the index of element in
    // the given array arr[]
    unordered_map<int, int> m;
 
    for(int i = 0; i < arr.size(); i++)
        m[arr[i]] = i + 1;
 
    // Traverse over the list pieces
    for(int i = 0; i < pieces.size(); i++)
    {
         
        // If item size is 1 and
        // exists in map
        if (pieces[i].size() == 1 && 
          m[pieces[i][0]] != 0)
        {
            continue;
        }
 
        // If item contains > 1 element
        // then check order of element
        else if (pieces[i].size() > 1 &&
               m[pieces[i][0]] != 0) 
        {
            int idx = m[pieces[i][0]] - 1;
 
            idx++;
 
            // If end of the array
            if (idx >= arr.size())
                return false;
 
            // Check the order of elements
            for(int j = 1; j < pieces[i].size(); j++)
            {
                 
                // If order is same as
                // the array elements
                if (arr[idx] == pieces[i][j]) 
                {
                     
                    // Increment idx
                    idx++;
 
                    // If order breaks
                    if (idx >= arr.size() && 
                     j < pieces[i].size() - 1)
                        return false;
                }
 
                // Otherwise
                else
                {
                    return false;
                }
            }
        }
 
        // Return false if the first
        // element doesn't exist in m
        else
        {
            return false;
        }
    }
 
    // Return true
    return true;
    }
};
