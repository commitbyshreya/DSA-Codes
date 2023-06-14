#include <iostream>
#include <vector>
using namespace std;

/* Given a matrix of dimensions n x m and two coordinates 
(l1,r1) and (l2,r2). Return sum of rectangle from (l1,r1) and (l2,r2)*/

int RectSum(vector<vector<int> >&matrix,int l1,int r1,int l2,int r2){
    int sum = 0;
    //row -> prefix
    for(int i =0;i<matrix.size();i++){
        for(int j=1;j<matrix[i].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //print row prefix
    cout<<"Row --> Prefix"<<endl;
    for(int i =0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    //column-> prefix
    for(int i = 1;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    //print column prefix
    cout<<"Column --> Prefix"<<endl;
    for(int i =0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    //sum of the rectangle
    int top_sum=0, topleft_sum=0, left_sum=0;
    if(l1!=0) top_sum = matrix[l1-1][r2];
    if(r1!=0) left_sum = matrix[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum = matrix[l1-1][r1-1];
    
    sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum; 
        
    return sum;
}

int main()
{
    int row,cols;
    cout<<"enter no. of rows: ";
    cin>>row;
    cout<<"enter no. of cols: ";
    cin>>cols;
    cout<<"Input for metrix: "<<endl;
    vector<vector<int> >matrix(row, vector<int> (cols));
    for(int i =0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"enter co-ords (l1,r1) and (l2,r2): ";
    cin>>l1>>r1>>l2>>r2;
    int sum;
    sum = RectSum(matrix,l1,r1,l2,r2);
    cout<<"Sum of the Rectangle: "<<sum;

   return 0;
}