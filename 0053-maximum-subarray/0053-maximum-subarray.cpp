class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cursum=0;int maxsum=INT_MIN;

        for(int x:nums)
        {
            cursum+=x;
            maxsum=max(maxsum,cursum);
            if(cursum<=0)
            {
                cursum=0;
            }
        }
        return maxsum;
    }
};