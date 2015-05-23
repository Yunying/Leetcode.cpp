class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        map<int,int> mmap;
        int level = nums.size()/2;
        for (int i : nums){
            if (mmap.find(i) != mmap.end()){
                mmap[i]++;
            }
            else{
                mmap[i] = 1;
            }
        }
        for (auto it = mmap.begin(); it!=mmap.end(); ++it){
            if (it->second > level){
                return it->first;
            }
        }
        
    }
};