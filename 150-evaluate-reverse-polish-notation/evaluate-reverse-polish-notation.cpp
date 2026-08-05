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
                if(i=="+") {
                    int a = stoi(st.top());
                    st.pop();
                    int b = stoi(st.top());
                    st.pop();
                    val =a+b;
                    cout<<a<<" "<<b<<i<<" "<<val<<endl; 
                    st.push(to_string(val));
                }

                else if(i=="-") {
                    int a = stoi(st.top());
                    st.pop();
                    int b = stoi(st.top());
                    st.pop();
                    cout<<a<<" "<<b<<i<<" "<<val<<endl; 
                    val =b-a;
                    st.push(to_string(val));
                }

                else if(i=="*") {
                    int a = stoi(st.top());
                    st.pop();
                    int b = stoi(st.top());
                    st.pop();
                    cout<<a<<" "<<b<<i<<" "<<val<<endl; 
                    val =a*b;
                    st.push(to_string(val));
                }


                else {
                    int a = stoi(st.top());
                    st.pop();
                    int b = stoi(st.top());
                    st.pop();
                    val =b/a;
                    cout<<a<<" "<<b<<i<<" "<<val<<endl; 
                    st.push(to_string(val));
                }
            }

            else st.push(i);
        }

        return stoi(st.top())==val ? val : stoi(st.top());
    }
};