#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

stack<char> s;
int pda = 0;

void state2()
{
   if (!s.empty() && s.top() == '$')
   {
      s.pop();
      cout << "Going to state 2\n";
      pda = 2;
   }
   else
   {
      pda = -1;
   }
}

void state0(char str)
{
   if (str == 'a')
   {
      s.push('a');
      s.push('a');

      cout << "Going to state 0\n";
      pda = 0;
   }
   else if (str == 'b')
   {
      if (!s.empty() && s.top() == 'a')
      {
         s.pop();
         cout << "Going to state 1\n";
         pda = 1;
      }else{
         pda = -1;
      }
   }
  
}

void state1(char str)
{
   if (str == 'b')
   {
      if (!s.empty() && s.top() == 'a')
      {
         s.pop();
         cout << "Going to state 1\n";
         pda = 1;
      }
   }
   else
   {
      state2();
   }
}

int isAccepted(char str[])
{
   int n = strlen(str);
   for (int i = 0; i <= n; i++)
   {
      cout << pda;
      if (pda == 0)
      {
         state0(str[i]);
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
   if (pda = 0 || pda == 2)
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
   char str[] = "abba";
   if (isAccepted(str))
   {
      cout << "Accepted";
   }
   else
   {
      cout << "Rejected";
   }
   return 0;
}
