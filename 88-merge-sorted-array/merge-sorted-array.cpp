class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Two pointer O(m+n)
        // take two pointers, one at last of each array
        // one pointer at last of first array to track position of next big element
        // compare the pointer value, which ever is big, place at kth index of first    array
        int p1=m-1,p2=n-1;
        int k=m+n-1; // position pointer
        while(p1>=0 && p2 >= 0){
            if(nums1[p1] > nums2[p2]){
                nums1[k] = nums1[p1];
                p1--;
                k--;
            }else{
                nums1[k]=nums2[p2];
                p2--;
                k--;
            }
        }
        
        while(p2 >= 0){
            nums1[k] = nums2[p2];
            p2--;
            k--;
        }
        
    }
};