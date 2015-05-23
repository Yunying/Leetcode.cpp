class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        for (int i=0; i<32; i++){
            if (i<=15){
                ret += ((n)&(1<<i))<<(31-i*2);
            }
            else{
                ret += ((n)&(1<<i))>>(i*2-31);
            }
            
        }
        return ret;
    }
};