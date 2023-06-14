#include <iostream>
#include <vector>
using namespace std;
/* Given square matrix turn it by 90 degree in a cloxkwise direction
without using extra space*/

void rotateMatrix(vector<vector<int> >&v){
    int n = v.size();
    for(int i =0;i<n;i++){
        for(int j = 0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}
int main()
{
    int row,cols;
    cout<<"enter no. of rows: ";
    cin>>row;
    cout<<"enter no. of cols: ";
    cin>>cols;
    cout<<"Input for metrix: "<<endl;
    vector<vector<int> >v(row, vector<int> (cols));
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }
    rotateMatrix(v);
    cout<<"Ans metrix "<<endl;
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
   return 0;
}