class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // brute force approach - T-O(N^2)
        // 2 for loop for traversing complete array
        // condition if a[i]=0 and a[j]>0, swap
        int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i+1 ; j< n ;j++){
        //         if(nums[i] == 0 && nums[j] > 0){
        //             int temp = nums[i];
        //             nums[i] = nums[j];
        //             nums[j] = temp;
        //         }
        //     }
        // }

        // Optimized approach T-O(n)
        // Two pointers approach
        // take one pointer to place where next non zero should go
        // scanning the array
        int i=0;
        for(int j = 0 ; j < n ; j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};