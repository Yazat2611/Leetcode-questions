class Solution {
public:
    string clearDigits(string s) {
        
        stack<char> st;

        for(auto i:s) {
            if(i>='a' && i<='z') {
                st.push(i);
            }

            else {
                if(!st.empty()) st.pop();
                continue;
            }
        }

        string str = "";

        while(!st.empty()) {
            str+=st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());

        return str;
    }
};