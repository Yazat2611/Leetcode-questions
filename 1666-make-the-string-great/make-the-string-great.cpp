class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        string res = "";

        for(auto i:s) {
            if(i>='A' && i<='Z') {
                char ch = i+32;
                if(st.size() && st.top()==ch) {
                    st.pop();
                }
                else st.push(i);
            }

            else {
                char ch = i-32;
                if(st.size() && st.top()==ch) {
                    st.pop();
                }

                else st.push(i);
            }
        }

        while(st.size()) {
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());


        return res;
    }
};