class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;

        for(auto i:asteroids) {
            bool destroyed = false;

            while(st.size() && i<0 && st.top()>0) {
                    if(st.top()>abs(i)) {
                        destroyed = true;
                        break;
                    }

                    else if(st.top()==abs(i)) {
                        st.pop();
                        destroyed = true;
                        break;
                    }

                    st.pop();
                }
            
            if(!destroyed) {
                st.push(i);
            }
        }
        

        vector<int> res;

        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(),res.end());

        return res;
    }
};