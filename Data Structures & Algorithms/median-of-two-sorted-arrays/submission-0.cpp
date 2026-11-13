class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int i=0,j=0,m=nums1.size(),n=nums2.size(),var=m+n;
        vector<int> temp;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){temp.push_back(nums1[i++]);}
            else temp.push_back(nums2[j++]);
        }
        while(i<m)temp.push_back(nums1[i++]);
        while(j<n)temp.push_back(nums2[j++]);
        if((m+n)%2==0){
            ans=(temp[(var/2)]+temp[(var/2)-1]);
            ans=ans/2;
        }else{
            ans=temp[var/2];
        }
        return ans;
    }
};