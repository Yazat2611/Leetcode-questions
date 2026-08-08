class Solution {
public:
    int minLength(string s) {
        
        stack<char> st;

        for(auto i:s) {
            if(i=='B' && st.size() && st.top()=='A') st.pop();
            else if(i=='D' && st.size() && st.top()=='C') st.pop();
            else st.push(i);
        }

        return st.size();
    }
};