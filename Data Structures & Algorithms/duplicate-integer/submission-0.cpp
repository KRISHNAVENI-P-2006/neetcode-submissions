class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        while(i<nums.size()){
            if(nums[i-1]==nums[i])return true;
            i++;
        }
        return false;
    }
};