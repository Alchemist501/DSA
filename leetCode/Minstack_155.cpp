class MinStack {
 public:
  vector<int> stack;
  vector<int> minstack;
  MinStack() {}

  void push(int val) {
    stack.push_back(val);
    if (minstack.empty() or val <= minstack[minstack.size() - 1])
      minstack.push_back(val);
  }

  void pop() {
    if (minstack[minstack.size() - 1] == stack[stack.size() - 1])
      minstack.pop_back();
    stack.pop_back();
  }

  int top() { return stack[stack.size() - 1]; }

  int getMin() { return minstack[minstack.size() - 1]; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */