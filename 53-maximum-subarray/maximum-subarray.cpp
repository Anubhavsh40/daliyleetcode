class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int maxSum= INT_MIN;
        for (int i : nums){
            curSum += i;
            maxSum= max(curSum,maxSum);
// after adding the cursum if cursum is less than maxsum it will reset to 0
            if(curSum<0){
                curSum=0;
            }
        }
    return maxSum;
    }
};