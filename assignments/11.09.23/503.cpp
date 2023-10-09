class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        st.push(-1);
        int n=nums.size();
        vector<int>v(n);
        
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(st.empty()) st.push(-1);
            
            
           v[i%n]=st.top();
            
            st.push(nums[i%n]);

        }
        return v;
    }
};