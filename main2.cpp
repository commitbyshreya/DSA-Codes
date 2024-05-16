#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> s;
int pda = 0;
void state2()
{
    if (s.top() == '$')
    {
        s.pop();
        cout << "Going to final state" << "\n";
        pda = 2;
    }
    else
    {
        pda = -1;
    }
}
void state1(char c)
{
    cout << "coming here"
         << "\n";
    cout << c;
    if (c == 'a' && s.top() != '$')
    {
        if (s.top() == 'a')
        {
            cout << "pop a";
            s.pop();
            cout << "Going to state 1" << "\n";
            pda = 1;
        }
    }
    else if (c == 'b' && s.top() != '$')
    {
        if (s.top() == 'b')
        {
            cout << "pop b";
            s.pop();
            cout << "Going to state 1"
                 << "\n";
            pda = 1;
        }
    }
    else
    {
        state2();
    }
}
void state0(char c, bool flag)
{
    if (flag)
    {
        state1(c);
    }
    else
    {
        if (c == 'a')
        {
            s.push('a');
            cout << "Going to state 0" << "\n";
            pda = 0;
        }
        else if (c == 'b')
        {
            s.push('b');
            cout << "Going to state 0"
                 << "\n";
            pda = 0;
        }
        else
        {
            pda = -1;
        }
    }
}
int isAccepted(char str[])
{
    int n = strlen(str);
    int half = n / 2;
    for (int i = 0; i <= n; i++)
    {
        cout << pda << "\n";
        if (half == i)
        {
            bool flag = true;
            if (pda == 0)
            {
                state0(str[i], flag);
            }
            else if (pda == 1)
            {
                state1(str[i]);
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bool flag = false;
            if (pda == 0)
            {
                state0(str[i], flag);
            }
            else if (pda == 1)
            {
                state1(str[i]);
            }
            else
            {
                return 0;
            }
        }
    }
    if (pda == 0 || pda == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[] = "abba";
    s.push('$');
    if (isAccepted(str))
    {
        cout << "Accepted"
             << "\n";
    }
    else
    {

        cout << "Rejected"
             << "\n";
    }

    return 0;
}