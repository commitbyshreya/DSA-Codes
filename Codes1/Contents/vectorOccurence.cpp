#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v(5);
    cout<<"Enter the elements: "<<endl;
    for(int i= 0; i < v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x: "<<endl;
    cin>>x;

    int occurence=-1;
    //solution 1
    for(int i = 0; i < v.size(); i ++){
        if(v[i]==x){
            occurence = i;
        }
    }
    //solution 2
    for(int i = v.size()-1; i >= 0; i--){
        if(v[i]==x){
            occurence = i;
            break;
        }
    }
    cout<<occurence;
   return 0;
}