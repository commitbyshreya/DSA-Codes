#include <iostream>
#include <vector>
using namespace std;

/*Given positive integer n, generate an n x n metrix filled 
with elements from 1 to n2 in spiral order*/

vector<vector <int> > createMatrix(int n){
    vector<vector<int> >v(n, vector<int> (n));
     int left = 0,right = n-1, top = 0, bottom = n-1;
    int direction =0,value=1;
    while(left<=right and top<=bottom){
        //left-> right
        if(direction==0){
            for(int col=left;col<=right;col++){
               v[top][col]=value++;
            }
            top++;
        }
        //top->bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                v[row][right]=value++;;
            }
            right--;
        }
        //right->left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                v[bottom][col]=value++;;
            }
            bottom--;
        }
        //bottom->top
        else if(direction==3){
            for(int row=bottom;row>=top;row--){
                v[row][left]=value++;;
            }
            left++;
        }
        direction = (direction+1)%4;

    }
    return v;
}

int main()
{
    int n;
    cin>>n;
     vector<vector<int> >v(n, vector<int> (n));
     v = createMatrix(n);
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}