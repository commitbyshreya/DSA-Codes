/* Maps 
- STL Containers store key values
- elements are stored in ascending descending order 
- Maps can't have duplicate values 
- Maps are implemented using BST 
 */

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int, greater<string> > directory;
    directory["Shreya"] = 1111;
    directory["Fhreya"] = 5111;
    directory["Reya"] = 8111;
    directory.insert(make_pair("Neha", 2222));

    // for(auto element: directory){
    //     cout<<"Name: "<<element.first;
    //     cout<<" -> Phone: "<<element.second<<endl;
    //  }
    map<string,int> :: reverse_iterator it;
    for(it = directory.rbegin(); it != directory.rend() ; it++){
        cout<<"Name: " <<it->first<<" || Phone: "<<it->second<<endl;
    }
    cout<<endl;
    cout<<directory.size()<<endl;
    cout<<directory.empty()<<endl;
    
   return 0;
}