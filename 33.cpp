// SEARCG IN ROTATED SORTED ARRAY...

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //In this type of questions any one of the first half or second half (after finding the mid element of the array) is always sorted and binary search is applicable on that...

        int n = nums.size();
        int start = 0, end = (n - 1), mid;

        while(start <= end){
            mid = start + (end - start) / 2;

            if(target == nums[mid]){
                return mid;
            }
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }else {
                    start = mid + 1;
                }
            }else{
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }  

        return -1;
    }
};