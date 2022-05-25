// https://leetcode.com/problems/implement-queue-using-stacks
class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input_.push(x);
    }
    
    int pop() {
        if (output_.empty()) {
            while (!input_.empty()) {
                output_.push(input_.top());
                input_.pop();
            }
        }
        int result = output_.top();
        output_.pop();
        return result;
    }
    
    int peek() {
        if (output_.empty()) {
            while (!input_.empty()) {
                output_.push(input_.top());
                input_.pop();
            }
        }
        return output_.top();
    }
    
    bool empty() {
        return input_.empty() && output_.empty();
    }
private:
    std::stack<int> input_;
    std::stack<int> output_;
};
