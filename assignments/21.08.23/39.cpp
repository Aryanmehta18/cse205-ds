class Solution {
public:
    void solve(vector<int>& candidates,int target,int count,vector<int>&output,int index,vector<vector<int>>&ans){
        if(count==target){
            ans.push_back(output);
            return;
        }
        if(count>target) return;
        for(int i=index;i<candidates.size();i++){
            output.push_back(candidates[i]);
            solve(candidates,target,count+candidates[i],output,i,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(candidates,target,0,output,0,ans);
        return ans;
    }
};