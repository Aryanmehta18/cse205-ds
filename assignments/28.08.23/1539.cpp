class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      set<int>st;
      int ans=0;
      for(int it:arr){
          st.insert(it);
      }
      int cnt=0;
      for(int i=1;i<=1e6;i++){
          if(cnt==k){
             ans=i;
             break;
          }
          if(st.find(i)==st.end()){
              cnt++;
          }
      }
    
      return ans-1;
    }
     
};
