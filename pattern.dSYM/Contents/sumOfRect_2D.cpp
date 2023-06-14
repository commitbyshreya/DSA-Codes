#include <iostream>
#include <vector>
using namespace std;

/* Given a matrix of dimensions n x m and two coordinates 
(l1,r1) and (l2,r2). Return sum of rectangle from (l1,r1) and (l2,r2)*/

int sumOfSquare(vector<vector<int> >&v,int l1,int r1,int l2,int r2){
    int sum = 0;
    // Approach -> 1
    // for(int i=l1;i<=l2;i++){
    //     for(int j=r1;j<=r2;j++){
    //         sum += v[i][j];
    //     }
    // }
    /*Approach -> 2 
    prefix of each row.*/
    for(int i =0;i<v.size();i++){
        for(int j=1;j<v[i].size();j++){
            v[i][j] += v[i][j-1];
        }
    }
    //printing prefix of each row
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    /*if [5 11 18],
        [ 9 19 30]
    v[i][r2] - v[i][r1-1] = 18 - 5 = 13
    v[i][r2] - v[i][r1-1] = 30 - 9 = 11
                                sum= 34*/
    for(int i=l1;i<=l2;i++){
       if(r1!=0){
            sum += v[i][r2] - v[i][r1-1];
        }
        else{
            sum+= v[i][r2];
        }
    }
    

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
    vector<vector<int> >v(row, vector<int> (cols));
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"enter co-ords (l1,r1) and (l2,r2): ";
    cin>>l1>>r1>>l2>>r2;
    
    int sum = sumOfSquare(v,l1,r1,l2,r2);
    cout<<"Sum: "<<sum;
   return 0;
}