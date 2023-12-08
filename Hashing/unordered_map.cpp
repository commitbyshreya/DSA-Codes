#include <iostream>
#include <unordered_map>
using namespace std;

/* Unordered Map
   -> elements stored in unsorted manner
   -> insertion, deletion, retreival = time complexity O(1) i.e. is constant
   -> efficiet when order doesnt matter but timpe complexity does*/

int main()
{
    unordered_map <int, string> record;
    record[1] = "Shreya";
    record[3] = "Shrey";
    record[2] = "Shreyas";
    record.insert(make_pair(4,"Ritu"));
    record[1] = "Nishant"; //record 1 will be updated
    // record.erase(1);

    for(auto pair: record){
        cout<<"RollNo- "<<pair.first<<" "<<endl;
        cout<<"Name- "<<pair.second<<endl;
    }

   return 0;
}