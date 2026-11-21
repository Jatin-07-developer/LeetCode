// CONTAINER WITH MOST WATER...

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int leftPtr = 0;
        int rightPtr = n - 1;
        int maxVol = INT_MIN;

        while (leftPtr < rightPtr){
            int w = rightPtr - leftPtr;
            int h = min(height[leftPtr], height[rightPtr]);
            int vol = w * h;
            maxVol = max(maxVol, vol);

            if(height[leftPtr] < height[rightPtr]){
                leftPtr++;
            } else{
                rightPtr--;
            }
        }

        return maxVol;
    }
};