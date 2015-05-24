class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x < 10) return true;
        
        stringstream ss; ss << x;
        string s = ss.str();
        int index1 = 0; int index2 = s.length()-1;
        while (index1 < s.length()/2){
            if (s.at(index1) != s.at(index2)) return false;
            ++index1; --index2;
        }
        return true;
    }
};