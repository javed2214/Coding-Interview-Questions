// Boats to Save People
// https://leetcode.com/problems/boats-to-save-people/
// Two Pointer Application

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        int n = people.size();
        
        int l = 0, r = n-1, cnt = 0;
        
        while(l <= r){
            if(people[l] + people[r] <= limit) ++l;
            cnt++;
            --r;
        }
        return cnt;
    }
};
