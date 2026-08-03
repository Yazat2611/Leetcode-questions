class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int i = 0;
        int j = 0;

        int n = pushed.size();
        int m = popped.size();

        stack<int> st;

        while(i<n && j<m) {
            if(!st.empty() && st.top()==popped[j]) {
                st.pop();
                j++;
            }

            else {
                st.push(pushed[i]);
                i++;
            }
        }

        while(j<m) {
            if(st.top()==popped[j]) {
                st.pop();
            }
            j++;
        }

        return st.size()==0;
    }
};