/* COMPLEX NUMBERS
   real num -> 2,3..
   imaginery num -> i2,i3..
   add num1 + num2 -> 5 + i2 + 2 + i2 = 7 + i4
*/


#include <iostream>
using namespace std;

class Complex{
   public:
   int real ; int imaginery ;

   Complex(int real = 0, int imaginery = 0){
      this->real = real;
      this->imaginery = imaginery;
   }
   void addNumbers(Complex c1, Complex c2){
      Complex result; 
      result.real = c1.real + c2.real;
      result.imaginery = c1.imaginery + c2.imaginery;

      cout<<"Ans: "<< result.real <<" + "<< result.imaginery <<"i";
      
   }
};
int main()
{

   Complex c1(5,2), c2(2,2), c3;
   c3.addNumbers(c1,c2);
   return 0;
}


