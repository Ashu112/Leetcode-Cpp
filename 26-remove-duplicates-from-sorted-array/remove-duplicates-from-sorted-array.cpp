class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // two pointer approach T-O(n)
        // take one pointer for placing next unique element
        // one pointer to scan the array
        int n = nums.size();
        int writeIndex = 1;
        for(int i = 1; i < n ; i++){
            if(nums[i] != nums[i-1]){
                nums[writeIndex] = nums[i];
                writeIndex++;
            }
        }
        return writeIndex; // this give unique element in the array
    }
};