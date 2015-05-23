class Solution {
public:
    string convertToTitle(int n) {
        string result;
        if (n<=26){
            result.push_back('A'+n-1);
            return result;
        }
         n--;
        while(n>=0){
            int i = n%26;
            
            char c = 'A'+i;
            result.push_back(c);
            n /= 26;
            n--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};