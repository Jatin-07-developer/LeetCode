//MAXIMUM SUBARRAY...

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm...
        int cMax = 0;
        int mSum = INT_MIN;
        int n = nums.size();

        for (int i=0; i<n; i++){
            cMax += nums[i];
            mSum = max(cMax, mSum);
            if (cMax < 0){
                cMax = 0;
            }
        }
        return mSum;
    }
};