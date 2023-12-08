/* Implementation of Abstract Datatype using rational numbers
 -> Datatype : Defines type of a particular data to be stored, eg int
 -> Types: Primitive - 1. Bool
                       2. Int
                       3.Char 
           Non- Primitive - 1. Arrays
                            2. Strings
 -> ABSTRACTION : It refers to the act of representing essential details by hiding bg details, eg. Car
 -> Abstract Data Type(ADT) : It is a mathematical model that logically represents a datatype
 * We can't create instances of adt classes but can use pointers
 * Abstract class should have atleast on virtual method
  
*/


#include <iostream>
using namespace std;
//Base Class
class Instrument{
   public:
   /*virtual - by implementing virtual keyword it tells that, if there is no overriden function in 
     base class then call function of virtual class otherwise the derived class method*/
   virtual void MakeSound() = 0;
  
};
//Derived Class
class Guitar: public Instrument{
 public:
   void MakeSound(){
       cout<<"Guitar sound.."<<endl;
   }
};
class Piano: public Instrument{
 public:
   void MakeSound(){
       cout<<"Piano sound.."<<endl;
   }
};
int main()
{
   Instrument* i = new Guitar();
  // i->MakeSound();
   Instrument* i1 = new Piano();
  // i1->MakeSound();

  Instrument* instruments[2] = {i,i1};
  for(int i = 0;i<2;i++){
   instruments[i]->MakeSound();
  }
 
   return 0;
}