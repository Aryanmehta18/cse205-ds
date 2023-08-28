class Solution {
public:
   void solve(int n,int k,vector<vector<int>>&ans,vector<int>&output,int index){
       if(k==0){
           ans.push_back(output);
           return;
       }
       for(int i=index;i<=n;i++){
           output.push_back(i);
           solve(n,k-1,ans,output,i+1);
           output.pop_back();
       }
   }
   vector<vector<int>> combine(int n, int k) {
       vector<vector<int>>ans;
       vector<int>output;
       int index=1;
       solve(n,k,ans,output,index); 
       return ans;
    }
};