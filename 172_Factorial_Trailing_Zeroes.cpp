class Solution {
public:
    int trailingZeroes(int n) {
        if (n == 0){
            return 0;
        }
        int num5=0;
        while(n>=5){
            num5+=n/5;
            n = n/5;
        }
       return num5;
    }
};