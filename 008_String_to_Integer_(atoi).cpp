class Solution {
public:
    int myAtoi(string str) {
        int result = 0; bool positive = true; 
        if (str.length() == 0) return 0;
        int index = 0;
        while(index < str.length() && str.at(index) == ' '){++index;}
        if (index == str.length()) return 0;
        if (str.at(index) == '+') {positive = true; index++;}
        else if (str.at(index) == '-'){positive = false; index++;}
        while (index < str.length() && str.at(index) > 47 && str.at(index) < 58){
            int times = 1;
            int tmp = result;
    		while (times <= 9){
    			result += tmp;
    			if (result < 0){
    				if (positive) result = INT_MAX;
    				else if (!positive) result = INT_MIN;
    				return result;
    			}
    			times++;
    		}
		
		result += str.at(index) - '0';
            if (result < 0){
    			if (positive) result = INT_MAX;
    			else if (!positive) result = INT_MIN;
    			return result;
    		}
            index++;
        }
        if (!positive) result = 0-result;
        return result;
            
    }
};