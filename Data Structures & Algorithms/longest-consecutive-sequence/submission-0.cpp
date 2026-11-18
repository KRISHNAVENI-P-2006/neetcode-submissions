class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int i,count=1,ext=0;
        vector<int> temp;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)count++;
            else if(nums[i]==nums[i-1])continue;
            else{
                temp.push_back(count);
                count=1;
            }
        }
        temp.push_back(count);
        if(temp.size()==0)return count;
        ext=temp[0];
        for(i=0;i<temp.size();i++){
            ext=max(ext,temp[i]);
        }
        return ext;
    }
};