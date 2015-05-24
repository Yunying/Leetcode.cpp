class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 0) return true;
        else if (s.length() % 2 == 1) return false;
        stack<char> q;
        unordered_map<char, char> mmap;
        mmap[')'] = '('; mmap[']'] = '['; mmap['}'] = '{';
        for (int i=0; i<s.length(); i++){
            char c = s.at(i);
            if (c == '(' || c == '{' || c == '[') q.push(c);
            else{
                if (q.empty()) return false;
                if (q.top() != mmap[c]) return false;
                else {
                    q.pop();
                }
            }
        }
        if (q.empty()) return true;
        else{
            return false;
        }
    }
};