#include <iostream>
using namespace std;
int main()
{
    int array[] = {1,2,1,2,1,2};
    int n = sizeof(array)/sizeof(array[0]);
    int evensum = 0;
    int oddsum = 0;
    
    for(int i = 0; i < n; i++){
        if(i%2==0){
            evensum += array[i];
        }
        else{
            oddsum += array[i];
        }
    }
    int ans = evensum - oddsum;
    cout<<ans;
   return 0;
}