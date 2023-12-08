#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> uset;
    uset.insert(2);
    uset.insert(2);
    uset.insert(3);
    uset.insert(1);
    for(auto u: uset){
        cout<<u<<" ";
    }
   return 0;
}