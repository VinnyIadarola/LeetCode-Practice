1class MyStack {
2public:
3    std::queue<int> q1;
4    MyStack() {
5    }
6    
7    void push(int x) {
8        q1.push(x);
9
10        for(size_t i = 0; i < q1.size() - 1; ++i) {
11            int val = q1.front();
12            q1.pop();
13            q1.push(val);
14        }
15
16    }
17    
18    int pop() {
19        int last = q1.front();
20        q1.pop();
21        return last;
22    }
23    
24    int top() {
25        return q1.front();
26    }
27    
28    bool empty() {
29        return q1.empty();
30    }
31};
32
33/**
34 * Your MyStack object will be instantiated and called as such:
35 * MyStack* obj = new MyStack();
36 * obj->push(x);
37 * int param_2 = obj->pop();
38 * int param_3 = obj->top();
39 * bool param_4 = obj->empty();
40 */