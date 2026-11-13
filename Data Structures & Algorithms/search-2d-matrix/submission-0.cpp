class Solution {
public:
    int bin(vector<int> &nums,int key,int l,int r){
        if(l>r)return false;
        int mid=l+(r-l)/2;
        if(nums[mid]==key)return true;
        if(nums[mid]<key)return bin(nums,key,mid+1,r);
         if(nums[mid]>key)return bin(nums,key,l,mid-1);
         return -1;
    }

    bool searchMatrix(vector<vector<int>>& mat, int targ) {
        int l=0,m=mat.size(),n=mat[0].size(),row=0,r=m-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mat[mid][0]==targ)return true;
            if(mat[mid][0]>targ)r=mid-1;
            if(mat[mid][0]<targ){
                row=mid;
                l=mid+1;
            }
        }
        return bin(mat[row],targ,0,n-1);
    }
};