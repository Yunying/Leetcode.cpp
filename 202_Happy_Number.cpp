class Solution {
public:
    bool isHappy(int n) {
        if (n==0){
            return false;
        }
        else if (n==1){
            return true;
        }
        
        vector<int> numbers;
        numbers.push_back(n);
        while(true){
            int number = 0;
            while (n>0){
                int tmp =  n%10;
                number += tmp*tmp;
                n /= 10;
            }
            if (number == 1){
                return true;
            }
            else if (find(numbers.begin(), numbers.end(), number) != numbers.end()){
                return false;
            }
            numbers.push_back(number);
            n = number;
        }
    }
};