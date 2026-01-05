class Solution {
public:
    void reverseString(vector<char>& s) {
        // two pointer O(N)
        // take two pointers at extreme ends and swap the char
        int n = s.size();
        int l = 0, r = n-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};