#include <iostream>
#include <vector>
using namespace std;

/*Given an nxm matrix 'a', return all elements of metrix in 
spiral order*/

void spiralOrder(vector<vector<int> > &v){
    int left = 0,right = v[0].size()-1, top = 0, bottom = v.size()-1;
    int direction =0;
    while(left<=right and top<=bottom){
        //left-> right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        //top->bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        //right->left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        //bottom->top
        else if(direction==3){
            for(int row=bottom;row>=top;row--){
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;

    }
    
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
    spiralOrder(v);
   return 0;
}

