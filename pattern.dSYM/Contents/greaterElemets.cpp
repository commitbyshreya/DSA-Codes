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
    int ele = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i]>x){
            count++;
            ele = v[i];
            cout<<"Element: "<<ele<<endl;
        }
    }
    cout<<"Total elements greater then x are: "<<count;
}