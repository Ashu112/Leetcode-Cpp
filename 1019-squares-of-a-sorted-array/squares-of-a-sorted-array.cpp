class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // brute force approach - T O(nlogn)
        // square each number
        // sort the array
        // for(int i = 0 ; i < nums.size();i++ ){
        //     nums[i] = nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        // optimised two pointer approach T-O(n) S-O(n)
        // take 2 pointers, l and r placed at extreme ends
        // compare the absolute value and place it in new array
        int n = nums.size();
        vector<int> ans(n,0);
        int l = 0, r = n-1, k = n-1;
        while(l<=r){
            if(abs(nums[l]) > abs(nums[r])){
                ans[k] = nums[l]*nums[l];
                l++;
            }else {
                ans[k] = nums[r] * nums[r];
                r--;
            }
            k--;
        }
        
        return ans;
    }
};