class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i=0; i<32; i++){
            if (((1<<i) & (n)) != 0){
                count ++;
            }
        }
        return count;
    }
};