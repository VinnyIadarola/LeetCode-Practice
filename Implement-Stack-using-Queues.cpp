1class MyStack {
2public:
3    std::queue<int> q1;
4    MyStack() {
5    }
6    
7    void push(int x) {
8        q1.push(x);
9    }
10    
11    int pop() {
12        std::queue<int> q2;
13
14        while(q1.size() != 1) {
15            q2.push(q1.front());
16            q1.pop();
17        }
18
19        int last = q1.front();
20        q1 = q2;
21        return last;
22    }
23    
24    int top() {
25        std::queue<int> q2;
26
27        while(q1.size() != 1) {
28            q2.push(q1.front());
29            q1.pop();
30        }
31
32        int last = q1.front();
33        q2.push(q1.front());
34        q1 = q2;
35        return last;
36    }
37    
38    bool empty() {
39        cout << q1.size() << endl;
40        return q1.empty();
41    }
42};
43
44/**
45 * Your MyStack object will be instantiated and called as such:
46 * MyStack* obj = new MyStack();
47 * obj->push(x);
48 * int param_2 = obj->pop();
49 * int param_3 = obj->top();
50 * bool param_4 = obj->empty();
51 */