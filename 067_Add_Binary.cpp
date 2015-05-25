class Solution {
public:
    string addBinary(string a, string b) {
        if (a.length() == 0 && b.length() == 0) return "";
        else if (a.length() == 0) return b;
        else if (b.length() == 0) return a;
        
        if (a.length() > b.length()){
            while (b.length() < a.length()){
                b.insert(b.begin(), '0');
            }
        }
        else{
            while (a.length() < b.length()){
                a.insert(a.begin(), '0');
            }
        }
        int carry = 0;
        string result="";
        for (int i=a.length()-1; i>=0; i--){
            int tmp = a.at(i) - '0' + b.at(i) - '0' + carry;
            carry = 0;
            
            if (tmp>=2){
                char c = tmp - 2 + '0';
                result.push_back(c);
                carry = 1;
            }
            else{
                char c = tmp + '0';
                result.push_back(c);
            }
        }
        if (carry){
            result.push_back('1');
        }
        reverse(result.begin(), result.end());
        return result;
        
        
    }

};