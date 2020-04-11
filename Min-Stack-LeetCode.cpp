// Min Stack - LeetCode
// https://leetcode.com/problems/min-stack/


class MinStack {
private:
    stack <int> S1, S2;
public:
    
    MinStack() {
        
    }
    
    void push(int x) {
        S1.push(x);
        if(S2.empty()) S2.push(x);
        else if(S2.top() <= x) S2.push(S2.top());
        else S2.push(x);
    }
    
    void pop() {
        S1.pop();
        S2.pop();
    }
    
    int top() {
        return S1.top();
    }
    
    int getMin() {
        return S2.top();
    }
};

