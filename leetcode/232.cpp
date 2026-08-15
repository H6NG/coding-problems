#include <stack>
using namespace std;

class MyQueue {
private: 
    stack<int> s1; 
    stack<int> s2; 
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x); 
    }
    
    int pop() {
        int a; 
        while(!s1.empty()){
            a = s1.top(); 
            s1.pop(); 
            s2.push(a); 
        }
        int ans = s2.top(); 
        s2.pop(); 
        while(!s2.empty()){
            a = s2.top(); 
            s2.pop(); 
            s1.push(a); 
        }
        return ans; 
    }
    
    int peek() {
        int a; 
        while(!s1.empty()){
            a = s1.top(); 
            s1.pop(); 
            s2.push(a); 
        }
        int ans = s2.top(); 
        while(!s2.empty()){
            a = s2.top(); 
            s2.pop(); 
            s1.push(a); 
        }
        return ans; 
    }
    
    bool empty() {
        return (s2.empty() && s1.empty()); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */