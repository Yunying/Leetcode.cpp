class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int res = 0;
        for(int i=0; i<len; i++){
            if (i==len-1){
                res += s.at(i)-'A'+1;
            }
            else{
                res += (s.at(i)-'A'+1)*(pow(26,len-i-1));
            }
            
        }
        return res;
        
    }
};