class pair
{
    int price;
    int span;
    
    public pair(int e,int c)
    {
        price = e;
        span = c;
    }
}
class StockSpanner {

    Stack<pair> st;

    public StockSpanner() {
        
        st = new Stack<>();
    }
    
    public int next(int price) {
        
        int res = 1;

        while(!st.empty() && st.peek().price<=price)
        {
            res+=st.peek().span;

            st.pop();
        }

        st.push(new pair(price,res));

        return res;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */