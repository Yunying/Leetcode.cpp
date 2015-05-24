class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.back() < 9){
            int tmp = digits.back();
            digits.pop_back();
            digits.push_back(++tmp);
            return digits;
        }
        else{
            ++digits[digits.size()-1];
            for (int i = digits.size()-1; i>0; i--){
                if (digits[i] == 10){
                    digits[i] = 0;
                    digits[i-1] ++;
                }
                if (digits[i-1] != 10){
                    return digits;
                }
            }
            if (digits[0] == 10){
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
    }
};