#include <iostream>
#include <vector>
using namespace std;
/*Q Given an array, move all the even integers at beginning 
and all the odd at the end, relative order of the intergers does not matter 
*/
void even_oddSorting(vector<int> &v){
    int left_ptr = 0,right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++; right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++; 
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
    // std::sort(v,v.size(),greater<int>());
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
    even_oddSorting(v);
    //Printing the vector;
    cout<<"Vector after sorting zeros and ones"<<endl;
    for(int i =0; i <n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   return 0;
}