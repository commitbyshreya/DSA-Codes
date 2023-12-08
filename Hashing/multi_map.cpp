#include <iostream>
#include <map>
using namespace std;

/* MUlTI MAP / UNORDERED MULTI MAP
   -> STL container 
   -> ele stored in ordered/unordered manner 
   -> can store dulpicate values */
int main()
{
    multimap <string, int> record;
    record.insert(make_pair("Urvi", 88990));
    record.insert(make_pair("Uru", 884560));
    record.insert(make_pair("Urvi",22222));

    for(auto pairs: record){
        cout<<"Name: "<<pairs.first<<endl;
        cout<<"Phone: "<<pairs.second<<endl;
    }
    cout<<record.count("Urvi");
   return 0;
}