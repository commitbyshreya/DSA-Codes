#include <iostream>
#include <vector>
using namespace std;

int coverageOfMatrix(vector <vector<int> > &mat){
    int n = mat.size();
    int m = mat[0].size(), ans = 0;
    for(int i = 0;i<n;i++){
        for(int j= 0;i<m;j++){
            if(mat[i][j]==1){
                continue;
            }
            //left neighbour 
            if(i!=0 && mat[i-1][j]==1){
                ans++;
            }
            //right neighbour
            if(i<m-1 && mat[i+1][j]==1){
                ans++;
            }
            //top
            if(j!=0 && mat[i][j-1]==1){
                ans++;
            }
            //bottom
            if(j<n-1 && mat[i][j+1]==1){
                ans++;
            } 
        }
    }
    return ans;
}
int main()
{
    // vector <vector<int> > mat {{1,0},{0,1}};
       
    vector<vector<int> > mat
    {
        /* Element one with 2 values in it. */
        {1, 0}, 
        
        /* Element two with 3 values in it. */
        {0,1}
        
    };
  
    cout<<coverageOfMatrix(mat); 
   return 0;
}