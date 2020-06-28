#include<bits/stdc++.h>
using namespace std;

///LeetCode official.
/*
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        if(s.length() == 0)
        {
            return true;
        }
        if(s.length() == 1)
        {
            return false;
        }

        for(int i =0 ; i < s.length(); i++)
        {
            char c = s[i];
            cout << c;
            if(c == '}'|| c == ')' || c == ']')
            {
                if(stack.size() == 0 )
                    return false;
                if(c == '}' && stack.top() != '{')
                    return false;
                if(c == ')' && stack.top() != '(')
                    return false;
                if(c == ']' && stack.top() != '[')
                    return false;
                stack.pop();

            }
            else
            {
                stack.push(c);
            }
        }
        cout << "reached end";
        if(stack.size() == 0)
            return true;
        return false;
    }
};
*/

class Solution
{
public:
    string s;
    bool isValid(string s)
    {
        if(s.size()==0)
        {
            return true;
        }
        else if(s.size()==1 || s[0]==')' || s[0]=='}' || s[0]==']' || s[s.size()-1]=='(' || s[s.size()-1]=='{' || s[s.size()-1]=='[')
        {
            return false;
        }
        stack<char> st;
        int i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else if(s[i]==')' && st.top()=='(')
                {
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{')
                {
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution obj;
    cin >> obj.s;
    if(obj.isValid(obj.s))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
