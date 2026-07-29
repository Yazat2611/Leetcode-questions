class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        for(auto i:s) {
            if(i=='(' || i=='['|| i=='{') {
                st.push(i);
            }
            else{
                if(!st.empty()) {
                    char ch = st.top();
                    st.pop();

                    if((ch=='(' && i!=')') || (ch=='[' && i!=']') || (ch=='{' && i!='}')){
                        return false;
                    }
                }

                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};