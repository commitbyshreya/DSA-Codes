#include <iostream>
#include <set>
using namespace std;

/*
   RULES 
   1 -> STL container used to store unique values
   2 -> values are stored in ordered state 
   3 -> no indexing, ele identified by their own values
   4 -> once value inserted in set it cant be modified
   * Dynamic size allocation, hence no overflow
   * It is faster for insert, delete, search 
   # Memory allocation isn't continous, hence more space then array
   # Not suitable for large data set */
int main()
{
    set <int> set1;
    set1.insert(2);
    set1.insert(3);
    set1.insert(1);
    set1.insert(4);
    // set <int> :: iterator itr;
    // for(itr = set1.begin(); itr != set1.end();itr++){
    //     cout<<*itr<<" ";
    // }
    // *for each loop 
    for(auto value: set1){
        cout<<value<<" ";
    }cout<<endl;
    auto itr_s = set1.begin();
    itr_s++;
    auto itr = set1.end();
    
    set1.erase(itr_s,itr);
    for(auto value: set1){
        cout<<value<<" ";
    }cout<<endl;

   return 0;
}