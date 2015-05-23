class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        if (nums.size() == 1){
            return nums[0];
        }
        if (nums.size() == 2){
            return max(nums[0], nums[1]);
        }
        vector<int> money;
        money.push_back(nums[0]);
        money.push_back(nums[1]);
        for (int i=2; i<nums.size(); i++){
            money.push_back(max(money[i-1], nums[i]+max(money[i-3], money[i-2])));
        }
        return money[nums.size()-1];
    }
    
    int max(int a, int b){
        if (a>b){
            return a;
        }
        else{
            return b;
        }
    }
};