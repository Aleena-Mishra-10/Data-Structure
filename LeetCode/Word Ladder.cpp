class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set <string > ourmap;
        bool found = false;
        
        for (auto w : wordList)
        {
            if (endWord == w)
                found = true;
            
            ourmap.insert(w);
        }
        
        if (!found)
        return 0;
       
        
        queue <string> pendingNodes;
        pendingNodes.push(beginWord);
        int level = 0;
        
        while (pendingNodes.size() != 0)
        {
            
            level ++;
            int size = pendingNodes.size();
            
            for (int i = 0 ; i < size ; i ++)
            {
                string current = pendingNodes.front();
                pendingNodes.pop();
                
             
                for (int j = 0 ; j < current.size() ;j ++)
                { 
                    string temp = current;
                    for (char c = 'a' ; c <= 'z';  c++)
                    {
                        temp[j] = c;
                        
                     
                        
                        if (temp == current)
                            continue;
                        
                        else if (endWord == temp)
                            return level + 1;
                        
                        else if (ourmap.find(temp) != ourmap.end())
                        {
                            pendingNodes.push(temp);
                            ourmap.erase(temp);
                        }
                        
                    }
                }

            }
   
        }

        return 0;
        
    }
};
