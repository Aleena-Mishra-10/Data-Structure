vector<string> restoreIpAddresses(string s) {
        vector<vector<int>> ret;
        vector<int> cur;
        backtrack(s, 0, cur, ret);
        vector<string> answer;
        for(vector<int>& ips : ret) {
            string s = to_string(ips[0]) + "." + to_string(ips[1]) + "." + to_string(ips[2]) + "." + to_string(ips[3]);
            answer.push_back(s);
        }
        return answer;
    }
    
    void backtrack(string s, int i, vector<int>& cur, vector<vector<int>>& ret) {
        if(i == s.length() && cur.size() == 4) {
            // reached an valid ip address
            ret.push_back(cur);
            return;
        }
        if(i == s.length() || cur.size() == 4) {
            // if we run out of letters or run out of slots for sub-ip integers
            return;
        }
        if(s[i] == '0') {
            // If the first letter is 0, the only valid sub-ip address is "0"
            cur.push_back(0);
            backtrack(s, i + 1, cur, ret);
            cur.pop_back();
        } else {
            // the next sub-ip address could be length of 1 or 2 or 3 
            for(int len = 1; len <= 3 && i + len - 1 < s.length(); len++) {
                int ip = stoi(s.substr(i, len));
                if(ip > 0 && ip <= 255) {
                    cur.push_back(ip);
                    backtrack(s, i + len, cur, ret);
                    cur.pop_back();
                }
            }
        }
    }
