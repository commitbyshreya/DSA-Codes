#include <iostream>
using namespace std;
int main()
{
    int array[] = {22,33,66,77};
    int findNum = 66;
    int ans = -1;
    for(int i = 0; i < 5; i++){
        if(findNum==array[i]){
            ans = i;
            break; // break the loop if key is found 
        }
    }
    cout<<ans<<endl;
    return 0;
}