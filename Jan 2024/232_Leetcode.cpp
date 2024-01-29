// 232. Implement Queue using Stacks

// 


class MyQueue {
public:
    stack<int> s1,s2;

    MyQueue() {
        vector<int> v;
        int temp ;
        while(!s1.empty())    
        {
            temp = s1.top();
            cout<<temp;
            v.push_back(temp);
            s1.pop();
            s2.push(temp);
        }

        while(!s2.empty())
        {
            temp = s2.top();
            s2.pop();
            s1.push(temp);
        }



    }
    
    void push(int x) {
        
        int temp;
        while(!s1.empty())
        {
            temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
        s1.push(x);
        while(!s2.empty())
        {
            temp = s2.top();
            s2.pop();
            s1.push(temp);
        }

    }
    
    int pop() {
       int temp = s1.top();
        s1.pop();
        return temp;
    }
    
    int peek() {
         int temp = s1.top();
         return temp;
    }
    
    bool empty() {
        return s1.empty();
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