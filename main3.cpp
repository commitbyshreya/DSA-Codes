#include <iostream>

#include <stack>

// #include <string>

// #include <bits/stdc++.h>

using namespace std;

stack<char> s;

int pda = 0;

void state2()

{

    if (s.top() == '$')

    {

        s.pop();

        cout << "Final state reached "

             << "\n";

        pda = 2;
    }
}

void state1(char c)

{

    if (s.top() == 'r')

    {

        cout << "this2";

        s.pop();

        cout << "Going to state 1";
    }

    if (c == 'a' && s.top() != '$')

    {

        cout << "this3";

        if (s.top() == 'a')

        {

            s.pop();

            cout << s.top();

            cout << "Going to state 1";

            pda = 1;
        }
    }

    else

    {

        state2();
    }
}

void state0(char c)

{

    if (c == 'a')

    {

        if (s.top() == 'r')

        {

            state1(c);
        }

        else

        {

            s.push('a');

            cout << "Going to state 0"

                 << "\n";

            pda = 0;
        }
    }

    else if (c == 'b')

    {

        s.push('r');

        cout << "Going to state 0"

             << "\n";

        pda = 0;
    }
}

int isAccepted(char str[])

{
    int n = strlen(str);

    for (int i = 0; i <= n; i++)

    {

        if (pda == 0)

        {

            state0(str[i]);
        }

        else if (pda == 1)

        {

            cout << "changing";

            cout << (str[i]);

            state1(str[i]);
        }

        else

        {

            cout << "this";

            return 0;
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

    s.push('$');

    char str[] = "abbbba";

    if (isAccepted(str))

    {

        cout << "Accepted";
    }

    else

    {

        cout << "Rejected";
    }
}