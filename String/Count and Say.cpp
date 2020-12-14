class Solution {
public:
      string add(int count, char key) {
        string str="";
        str+= char(count+48);
        str+= key;
        
        return str;
    }
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        n= n-2;
        string str="11";
        
        while(n--) {
            int count=1, i=1, m=str.size();;
            char key=str[0]; 
            string str2="";
            while(i<m) {
                if(str[i]== key)
                    count++;
                else {
                    str2+=add(count, key);
                    count=1;
                    key=str[i];
                }                
                i++;
            }
            str2+=add(count, key);
            str="";
            str=str2;
        }
        
        return str;
    }
};
