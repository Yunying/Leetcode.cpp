class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<vector<char>> vec;
        for (int i=0; i<numRows; i++){
            vec.push_back(vector<char>());
        }
        int index = 0; bool forward = true;
        for (int i=0; i<s.length(); i++){
            vec[index].push_back(s.at(i));
            if (forward){
                if (index == numRows-1){
                    forward = false;
                    index--;
                }
                else{
                    index++;
                }
            }
            else if (!forward){
                if (index == 0){
                    forward = true;
                    index++;
                }
                else{
                    index--;
                }
            }
        }
        string result;
        for (int i=0; i<vec.size(); i++){
            for (int j=0; j<vec[i].size(); j++){
                result.push_back(vec[i][j]);
            }
        }
        return result;
    }
};