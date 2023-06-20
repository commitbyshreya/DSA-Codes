#include <iostream>
#include <vector>
using namespace std;

/*Q Given a sorted array find the sum of pairs that equal to k*/

void sumofEle(vector<int> &v, int k){
    int l = 0,r = v.size()-1, pairs = 0;
    while (l<r){
        if(v[l] + v[r] > k){
            r--;
        }
        if(v[l] + v[r] < k){
            l++;
        }
        if(v[l] + v[r] == k){
            pairs++;
            l++;r--;
        }
    }
    cout<<"Total pairs producing the o/p k:"<<pairs<<endl;
    
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
    char choice;int k;
    do{
    cout<<"Enter k: ";
    cin>>k;
    sumofEle(v,k);
    cout<<"Do you want to find pairs for another number?(y/n) ";
    cin>>choice;
    }while(choice == 'y' || choice =='Y');
    return 0;
}

//Naive Solution
// void sumofEle(vector<int> &v, int k){
//     int pairs=0;
//     for(int i = 0;i<v.size();i++){
//         for(int j = i+1;j <v.size();j++){
//             if(v[i]+v[j]==k){
//                 pairs++;
//             }
//         }
//     }
//     cout<<"Total pairs giving the value k: "<<pairs<<endl;
// }