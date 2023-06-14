#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //for loop
    for(int i = 0; i<5; i++ ){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i = 0; i <v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //for each loop
    // for(int ele:v){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    //while loop
    // int indx = 0;
    // while (indx < v.size())
    // {
    //     cout<<v[indx]<<" ";
    //     indx++;
    // }
    
    // cout<<endl;

    // vector <int> v;
    // int length;
    // cout<<"Enter the length of the vector/size of elements you want to add"<<endl;
    // cin>>length;
    // cout<<"Enter the elements: "<<endl;

    // for(int i= 0; i < length;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // for(int i = 0; i <v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

   return 0;
}