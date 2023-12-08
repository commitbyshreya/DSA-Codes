#include <iostream>
#include <list>
#include <vector>
using namespace std;

/* Types of Hashing methods
   1. Division Method -> k%10
   2. Mid Square method -> k^2
   3. Digit folding method 
   4. Multiplication method

   # If two elements having same hashing value is COLLISION
   Method to handle collision is called Seperate chaining 
   1. Open hashing / Close addressing -> Seperate chaining
   2. Closed Hahing ->linear probing

   #LOAD FACTOR
    -> Gives the average no. of entries in one hash bucket. n/m;
    If load factor exceeds the limit -> REHASHING is done

    #REHASHING -> change the size of hash table

*/ 

class Hashing{

    vector<list<int> > hashtable;
    int buckets;
    public:
    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets; //division method
    }

    void addKey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchKey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
        
    }

    void deleteKey(int key){
        int idx = hashvalue(key);
        if(searchKey(key)!=hashtable[idx].end()){
            hashtable[idx].erase(searchKey(key));
            cout<<key<<" is deleted"<<endl;
        }
        else cout<<key<<" is not present in table";
      
    }

};


int main()
{
    Hashing h(10);
    h.addKey(2);
    h.addKey(3);
    h.addKey(4);
    h.addKey(6);
    h.searchKey(3);
    h.deleteKey(2);
    h.deleteKey(2);
   return 0;
}