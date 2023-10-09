class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st2;
        string s1="";
        string s2="";
        for(char ch:s){
            if(!st.empty() && ch=='#'){
                st.pop();
            }
           else if(ch!='#'){
            st.push(ch);
            }
           
        }
         for(char ch:t){
          if(!st2.empty() && ch=='#'){
            st2.pop();
             }
            else if(ch!='#'){
          st2.push(ch);
             }

        }
        if(st.size()!=st2.size()) return false;
        while(st.size() && st2.size()){
            if(st.top()!=st2.top()) return false;
            st.pop();
            st2.pop();
        }
        return true;
    }

    
};