#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(1);
    s.insert(2);

    for(int value: s){
        cout<<value<<" ";
    }
   return 0;
}