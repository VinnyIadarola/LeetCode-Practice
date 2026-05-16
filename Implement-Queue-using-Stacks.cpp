1class MyQueue {
2private:
3    std::stack<int> st;
4
5public:
6
7    MyQueue() {
8    }
9    
10    void push(int x) {
11        std::stack<int> temp;
12        while(!st.empty()){
13            temp.push(st.top());
14            st.pop();
15        }
16
17        temp.push(x);
18
19        while(!temp.empty()){
20            st.push(temp.top());
21            temp.pop();
22        }
23
24    }
25    
26    int pop() {
27        int out = st.top();
28        st.pop();
29        return out;
30    }
31    
32    int peek() {
33        return st.top();
34    }
35    
36    bool empty() {
37        return st.empty();
38    }
39};
40
41/**
42 * Your MyQueue object will be instantiated and called as such:
43 * MyQueue* obj = new MyQueue();
44 * obj->push(x);
45 * int param_2 = obj->pop();
46 * int param_3 = obj->peek();
47 * bool param_4 = obj->empty();
48 */