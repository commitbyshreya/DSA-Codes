#include <iostream>
using namespace std;

int sum_in_range(int x,int y){
    int n = (y-x+1); //total no. of digits
    int a = x; //first digit
    int result = (n*(2*a + (n-1)*1))/2;
    return result;
}
int main()
{
    cout<<sum_in_range(2,6);
   return 0;
}