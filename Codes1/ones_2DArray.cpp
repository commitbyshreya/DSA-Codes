#include <iostream>
#include <vector>
using namespace std;

/* boolean 2D array, each row is sorted. Find row with max 
number of 1's*/

int maxOnes(vector<vector<int> > &v){
    int maxOnes = INT_MIN;
    int maxRows = -1;
    int columns = v[0].size();
    for(int i = 0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int nOfOnes = columns - j;
                if(nOfOnes>maxOnes){
                    maxOnes = nOfOnes;
                    maxRows = i;
                }
            }

        }
    }
    return maxRows;
}
int main()
{
    int row,cols;
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of cols: ";
    cin>>cols;
    vector<vector<int> > v(row,vector<int>(cols));
    for(int i =0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Row with highest no. of ones's: ";
    int ans = maxOnes(v);
    cout<<ans<<endl;
   return 0;
}