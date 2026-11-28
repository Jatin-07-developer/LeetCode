// PEAK INDEX IN MOUNTAIN ARRAY...

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = (n - 1), mid;

        while(start < end){
            mid = start + (end - start) / 2;

            if(arr[mid] < arr[mid + 1]){
                //DISCARD THE LEFT SIDE OF THE ARRAY....
                start = mid + 1;
            }else{
                //DISCARD THE RIGHT SIDE OF THE ARRAY....
                end =  mid;
            }
        }

        return start;
    }
};