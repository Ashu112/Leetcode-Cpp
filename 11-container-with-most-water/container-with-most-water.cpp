class Solution {
public:
    int maxArea(vector<int>& height) {
        // brute force T-O(n^2)
        // traverse the array in two loop and take maxArea for each index
        int n = height.size();
        int maxArea = 0;
        // for(int i =0 ; i< n;i++){
        //     for(int j = i+1; j < n ; j++){
        //         int area = (j-i)*min(height[j],height[i]);
        //         maxArea = max(area,maxArea);
        //     }
        // }
        // return maxArea;

        // Two pointer approach T-O(n)
        // take two pointers at extreme ends
        // calculate the area and compare with max area
        // if height of l is less we l pointer by 1 else r pointer decrement by 1
        int l = 0, r = n-1;
        while(l<r){
            int area = (r-l)*min(height[l],height[r]);
            maxArea = max(area,maxArea);
            if(height[l] < height[r])l++;
            else if(height[l] > height[r])r--;
            else {
                l++;
                r--;
            }
        }
        return maxArea;
    }
};