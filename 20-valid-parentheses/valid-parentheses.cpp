#include <stack>
class Solution {
public:
    std::stack<int> mystack;
    bool stackBracketHandler(char c)
    {
        if (c == '(')
        {
            mystack.push(1);
        }
        else if (c == '{')
        {
            mystack.push(2);
        }
        else if (c == '[')
        {
            mystack.push(3);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (mystack.empty() == 1) return false;
            if( (c == ')') && (mystack.top() == 1))
            {
                mystack.pop();
            }
            else if( (c == '}') && (mystack.top() == 2))
            {
                mystack.pop();
            }
            else if( (c == ']') && (mystack.top() == 3))
            {
                mystack.pop();
            }
            else 
            {
                return false;
            }
        }
        else 
        {
            return false;
        }
        return true;
    }

    bool isValid(string s) {
        for (int i = 0; i < s.length(); i++)
        {
            if (stackBracketHandler(s[i]) == false)
            {
                return false;
            }
        }
        if (!mystack.empty())
        {
            return false;
        }
        return true;
    }
};