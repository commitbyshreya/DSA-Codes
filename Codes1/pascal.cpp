#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >pascal_triangle(int n){
   vector<vector<int> >pascal(n);

   for(int i = 0;i<n;i++){
      pascal[i].resize(i+1);
      
      for(int j = 0;j<i+1;j++){
         if(j==0 || j==i){
            pascal[i][j]=1;
         }
         else{
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
         }
      }
   }

   return pascal;
}

int main()
{
   int n;
   cout<<"Input to find pascal triangle: ";
   cin>>n;
   vector<vector<int> >ans(n);
   ans = pascal_triangle(n);
   cout<<"Pascal Triangle"<<endl;
   for(int i = 0;i<ans.size();i++)//ans.size() - cz i is traversing rows
   {
      for(int j= 0;j<ans[i].size();j++)//j is traversing columns of each row
      {
         cout<<ans[i][j]<<" ";
      }cout<<endl;
   }
   return 0;
}