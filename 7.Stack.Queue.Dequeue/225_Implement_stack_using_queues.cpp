// https://leetcode.com/problems/implement-stack-using-queues
class MyStack {
public:
    MyStack() {

    }
    
    void push(int x) {
        input_.push(x);
    }
    
    int pop() {
        while (!input_.empty() && input_.size() > 1) {
            output_.push(input_.front());
            input_.pop();
        }
        int result = input_.front();
        input_.pop();
        while (!output_.empty()) {
            input_.push(output_.front());
            output_.pop();
        }
        return result;
    }
    
    int top() {
        while (!input_.empty() && input_.size() > 1) {
            output_.push(input_.front());
            input_.pop();
        }
        int result = input_.front();
        output_.push(input_.front());
        input_.pop();
        while (!output_.empty()) {
            input_.push(output_.front());
            output_.pop();
        }
        return result;
    }
    
    bool empty() {
        return input_.empty() && output_.empty();
    }
private:
    std::queue<int> input_;
    std::queue<int> output_;
};
