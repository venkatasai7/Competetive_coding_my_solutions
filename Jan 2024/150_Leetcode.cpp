// 150. Evaluate Reverse Polish Notation

// https://leetcode.com/problems/evaluate-reverse-polish-notation/?envType=daily-question&envId=2024-01-30

#include <string>
#include <ctype.h>


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;
        int c;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                c = s1.top(); s1.pop();
                c += s1.top(); s1.pop();
                s1.push(c);
            }
            else if(tokens[i]=="-")
            {
                c= s1.top(); s1.pop();
                c = s1.top() - c; s1.pop();
                s1.push(c);
            }
            else if(tokens[i]=="*")
            {
                c = s1.top(); s1.pop();
                c *= s1.top(); s1.pop();
                s1.push(c);
            }
            if(tokens[i]=="/")
            {
                c = s1.top(); s1.pop();
                c = s1.top()/c; s1.pop();
                s1.push(c);
            }
            else 
            {
                if(isdigit(tokens[i][tokens[i].size()-1]))
                    {int n = std::stoi(tokens[i]);
                    s1.push(n);}
            }


        }

        return s1.top();
    }
};