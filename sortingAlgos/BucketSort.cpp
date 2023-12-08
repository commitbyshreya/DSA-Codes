#include <iostream>
#include <vector>
using namespace std;

/* ALGO:
   1 -> Create Bucket of size n 
   2 -> Insert elements into bucket i.e. index = arr[i]* n 
   3 -> Sort each bucketD 
   4 -> Combine all the ele*/

void bucketSort(float arr[], int n){
    //step 1:
    vector <vector<float> > bucket(n, vector<float> ());

    //step 2:
    for(int i = 0;i<n;i++){
        int index = arr[i] * n;
        bucket[index].push_back(arr[i]);
    }

    //step 3:
    for(int i = 0;i<n;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
        }
    }

    //step 4: 
    int k=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<bucket[i].size();j++){
            arr[k++] = bucket[i][j];
        }
    }

}
int main()
{
    float arr[] = {0.13, 0.45, 0.12, 0.75};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}