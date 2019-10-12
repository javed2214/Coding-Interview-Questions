// Partition Array Into Three Parts With Equal Sum
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        
        int s = accumulate(A.begin(), A.end(), 0);
  
        if(s % 3 != 0) return false;
  
        s /= 3;
  
        int n = A.size();
        int cnt = 0, x = 0;
  
        for(int i=0;i<n;i++){
            x += A[i];
            if(x == s){
                cnt++;
                x = 0;
            }
        }
        return cnt == 3;
    }
};