#include <iostream>
#include <map>
using namespace std;

/* Maps are a STL(standard template library) container
   -> Stores values in key-value pairs
   -> elements are stored in sorted manner 
   -> cant have duplicate keys

*/
int main()
{
    map <string, int> directory;
    directory["Nama"] = 77800;
    directory["Naina"] = 7200;
    directory.insert(make_pair("heena",55567));

    // for(auto ele: directory){
    //     cout<<"Name: "<<ele.first<<endl;
    //     cout<<"Phone: "<<ele.second<<endl;
    // }
    map <string,int> :: reverse_iterator itr;
    for(itr = directory.rbegin();itr!= directory.rend(); itr++){
        cout<<itr->first<<" - "<<itr->second<<endl;
    }
   return 0;
}