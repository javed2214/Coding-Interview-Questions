// Maximum Length of Contiguous Subarray With Equal Number of Zeros and Ones - LeetCode
// https://leetcode.com/problems/contiguous-array/
// https://leetcode.com/problems/contiguous-array/discuss/577239/Short-C%2B%2B-easy-to-understand-code  [Explanation]


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int sum = 0, mx = 0;
        
        unordered_map <int, int> Map;
        Map[0] = -1;
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i] ? 1 : -1;
            if(Map.find(sum) != Map.end()) mx = max(mx, i - Map[sum]);
            else Map[sum] = i;
        }
        
        return mx;
    }
};