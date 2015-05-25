class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; 
        vector<int> result;
        if (n == 0) return;
        if (m == 0) {
            nums1 = nums2; return;
        }
        int q = m+n;
        for (int j=0; j<n; j++){
            while(i < m && nums2[j] > nums1[i]){
                i++;
            }
            nums1.insert(nums1.begin()+i, nums2[j]);
            i++; m++;
        }
        int s = nums1.size();
        for (int k = q; k<s; k++){
            nums1.pop_back();
        }
    }
};