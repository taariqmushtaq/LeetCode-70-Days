#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> mystack;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            mystack.push(s[i]);
        }
        else
        {
            if (mystack.empty())
            {
                return false;
                break;
            }
            if (s[i] == ')')
            {
                if (mystack.top() == '(' && !mystack.empty())
                {
                    mystack.pop();
                }
                else
                {
                    return false;
                    break;
                }
            }
            else if (s[i] == '}')
            {
                if (mystack.top() == '{' && !mystack.empty())
                {
                    mystack.pop();
                }
                else
                {
                    return false;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (mystack.top() == '[' && !mystack.empty())
                {
                    mystack.pop();
                }
                else
                {
                    return false;
                    break;
                }
            }
        }
    }
    if (mystack.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string d = "([{}])";
    bool k = isValid(d);
    if (k == true)
    {
        cout << "string is valid " << endl;
    }
    else
    {
        cout << "string is not valid" << endl;
    }
    return 0;
}