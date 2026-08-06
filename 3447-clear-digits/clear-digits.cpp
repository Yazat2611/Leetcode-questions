class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(auto i:s) {
            if(i>='0' && i<='9') {
                st.pop();
            }

            else st.push(i);
        }

        string res = "";

        while(st.size()) {
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());

        return res;
    }
};