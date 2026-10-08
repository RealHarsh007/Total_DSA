class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0)
            return false;

        int l = 0;
        int j=0;
        for ( j = 0; j < n; j++) {
            if (nums[l] != nums[j]) {
                l++;
                nums[l] = nums[j];
            }
        }
        return l+1;
    }
};