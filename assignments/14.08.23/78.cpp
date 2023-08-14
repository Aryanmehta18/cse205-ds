class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>output,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,ans,output,index+1);
        int ele=nums[index];
        output.push_back(ele);
        solve(nums,ans,output,index+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>output;
         int index=0;
         solve(nums,ans,output,index);
         return ans;
    
    }
};