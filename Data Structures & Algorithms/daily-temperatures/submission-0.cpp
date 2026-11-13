class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int i,n=temp.size(),val;
        vector<int> ans(n),stack;
        stack.push_back(0);
        for(i=1;i<n;i++){
            if(temp[i]<=temp[stack.back()])stack.push_back(i);
            else{
                while(!stack.empty()){
                    if(temp[stack.back()]>=temp[i])break;
                    val=i-stack.back();
                    ans[stack.back()]=val;
                    stack.pop_back();
                }
                stack.push_back(i);
            }
        }
        return ans;
    }
};