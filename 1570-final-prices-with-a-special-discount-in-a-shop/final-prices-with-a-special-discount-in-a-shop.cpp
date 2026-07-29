class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> res;

        stack<int> st;

        int n = prices.size();

        for(int i=n-1;i>=0;i--) {
            bool flg = false;
            while(!st.empty()) {
                int val = st.top();
                if(val<=prices[i]) {
                    res.push_back(prices[i]-val);
                    flg = true;
                    break;
                }
                st.pop();
            }

            if(!flg) res.push_back(prices[i]);

            st.push(prices[i]);
        }

        reverse(res.begin(),res.end());
        return res;

    }
};