// Program to Find Intersection of Two Vectors
// Ex: [4,9,5] and [9,4,9,8,4] => [9,4]

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        
        unordered_map<int,bool> Map;
        vector<int>v;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]<nums2[j])
                i++;
            else if(nums2[j]<nums1[i])
                j++;
            else{
                if(Map.find(nums1[i])==Map.end()){
                    v.push_back(nums1[i]);
                    Map[nums1[i]]=true;
                }
                i++;j++;
            }
        }
        return v;
    }
};