#include <iostream>
using namespace std;

class RationalNubers{
   private:
   int n,d;
   public:
   void set(int a, int b){
      n = a;
      d = b;
   }
   void add(RationalNubers u1, RationalNubers u2){
      n = u1.n * u2.d + u2.n * u1.d;
      d = u1.d * u2.d;
      cout<<"Ans: "<<n<<"/"<<d;
   }
};
int main()
{
    RationalNubers obj1 ,obj2,obj3; 
               obj1.set(3,8); 
               obj2.set(2,1); 
               obj3.add(obj1,obj2);
  

   return 0;
}

