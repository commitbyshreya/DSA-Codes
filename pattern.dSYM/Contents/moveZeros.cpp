#include <iostream>
#include <vector>
using namespace std;

//Q Move all the zeros at the end
void moveZeros(vector<int> &v){
   int count = 0;
    for(int i=0; i<v.size();i++){
        if(v[i]> 0){
            v[count++] = v[i];
        }
        
    }
    while(count < v.size()){
        v[count++] = 0;
    }
}
int main()
{
    int n; 
    cout<<"Enter the size of the vector: ";
    cin>>n;
    //taking input ele for vector
    cout<<"Enter vector elements: "<<endl;
    vector<int> v;
    for(int i = 0;i< n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele); //adding elements in the vector
    }
    moveZeros(v);
    //Printing the vector;
    cout<<"Vector after sorting zeros and ones"<<endl;
    for(int i =0; i <v.size();i++){
        cout<<v[i];
    }
   return 0;
}