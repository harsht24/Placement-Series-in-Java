// https://leetcode.com/problems/asteroid-collision/submissions/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for(int ele : asteroids){
            if(ele > 0) st.push(ele);
            else{
                while(st.size()>0 && st.top()>0 && st.top()<-ele) st.pop();
                
                if(st.size()>0 && st.top()==-ele) st.pop();
                else if(st.size()==0 || st.top()<0) st.push(ele);
                else{
                    ;
                }
            }
        }
        vector<int> ans(st.size(),0);
        
        for(int i=st.size()-1; i>=0;i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};