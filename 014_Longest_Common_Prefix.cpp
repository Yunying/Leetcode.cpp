class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0){
            return "";
        }
        else if (strs.size() == 1){
            return strs[0];
        }
        
        string s = strs[0];
        int index = 0;
        int len = s.length();
        string result = "";
        while (index<len){
            char c = s.at(index);
            for (int i=1; i<strs.size(); i++){
                if (index < strs[i].length()){
                    if (strs[i].at(index) != c){
                        return result;
                    }
                }
                else{
                    return result;
                }
            }
            result += c;
            index++;
        }
        return result;
    }
};