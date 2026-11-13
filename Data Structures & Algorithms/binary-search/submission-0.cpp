
class Solution{
    public:
    int bin(vector<int> &nums,int key,int l,int r){
        if(l>r)return -1;
        int mid=l+(r-l)/2;
        if(nums[mid]==key)return mid;
        if(nums[mid]<key)return bin(nums,key,mid+1,r);
         if(nums[mid]>key)return bin(nums,key,l,mid-1);
         return -1;
    }
    int search(vector<int>& nums, int key){
        return bin(nums,key,0,nums.size()-1);
    }

};