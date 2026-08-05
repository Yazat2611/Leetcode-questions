class Solution {
private:
    bool validOperator(string str) {
        return str=="+" || str=="-" || str=="*" || str=="/";
    }
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<string> st;
        int val = 0;

        for(auto i:tokens) {
            if(validOperator(i)) {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                if(i=="+") {
                    val =a+b;
                    st.push(to_string(val));
                }

                else if(i=="-") {
                    val =b-a;
                    st.push(to_string(val));
                }

                else if(i=="*") {
                    val =a*b;
                    st.push(to_string(val));
                }


                else {
                    val =b/a;
                    st.push(to_string(val));
                }
            }

            else st.push(i);
        }

        return stoi(st.top());
    }
};