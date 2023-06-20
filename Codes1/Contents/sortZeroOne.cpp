#include <iostream>
#include <vector>
using namespace std;

//Q Sort an array with only zeros and one

void sortZerosAndOnes(vector <int> &v){
    int right_pt = 0;
    int left_pt = v.size()-1;
    while(left_pt<right_pt){
        if(v[left_pt]==1 && v[right_pt]==0){
            v[left_pt++] = 0;
            v[right_pt--] = 1;

        }
        if(v[left_pt]==0){
            left_pt++;
        }
        if(v[right_pt]==1){
            right_pt--;
        }
    }
    return;
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
    sortZerosAndOnes(v);
    //Printing the vector;
    cout<<"Vector after sorting zeros and ones"<<endl;
    for(int i =0; i <n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   return 0;
}

//**Naive Solution
// void sortZeros_Ones(vector <int> &v){
//     int zero_count = 0;
//     /*counting the number of zeros in the vector by traversing 
//     it and incrementing the zero_count*/
//     for(int i:v){
//         if(v[i]==0){
//             zero_count++;
//         }
//     }
//     /*storing zeros in the vector till the index of zero_count
//     and then the ones are stored*/
//     for(int i = 0; i<v.size();i++){
//         if(i<zero_count){
//             v[i] = 0; //storing zeros
//         }
//         else{
//             v[i] = 1; //storing the rest numbers
//         }
//     }
// }