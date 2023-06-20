#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(4);
    cout<<"Enter the elements: "<<endl;
    for(int i= 0; i < v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: "<<endl;
    cin>>x;

    int count = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i]==x){
            count++;
        }

    }
    cout<<count;

   return 0;
}