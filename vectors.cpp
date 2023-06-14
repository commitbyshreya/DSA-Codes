#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
   
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

    // v.resize(5);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

    // v.pop_back();
    // v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;



    v.insert(v.end()-2,4);
    
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.erase(v.end()-3);
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    v.clear();
    cout<<"size: "<<v.size()<<endl;
    
    

   return 0;
}