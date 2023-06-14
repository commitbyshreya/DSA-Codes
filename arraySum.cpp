#include <iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};
    int size = end(array)-begin(array);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    cout<<sum;
   return 0;
}