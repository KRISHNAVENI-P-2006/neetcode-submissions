class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,left=1,right=1;
        vector<int> ans;
        ans.push_back(left);
        for(i=1;i<nums.size();i++){
            left*=nums[i-1];
            ans.push_back(left);
        }
        for(i=nums.size()-2;i>=0;i--){
            right*=nums[i+1];
            ans[i]*=right;
        }
    return ans;
    }
};