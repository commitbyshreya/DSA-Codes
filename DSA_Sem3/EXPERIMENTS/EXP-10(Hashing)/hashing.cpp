/*  Hashing
1. K mod M (m is the size of bucket)
Collision 
1. Linear probbing -> open hashing(closed addressing)
    (h(k) + i) % M
    disadavntage - clusters are created due to same hash value
2. Quadratic probbing -> closed hashing(open addressing)
    (h(k) + i^2) % M
*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Hashing{
    public:
    vector<list<int> > hashtable;
    int buckets;

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashValue(int key){
        return key%buckets;  //division method
    }
    void add(int key){
        int indx = hashValue(key);
        hashtable[indx].push_back(key);
    }
    list<int> ::iterator searchKey(int key){
        int indx = hashValue(key);
        return find(hashtable[indx].begin(), hashtable[indx].end(), key);
    }
    void deleteKey(int key){
        int indx = hashValue(key);
        if(searchKey(key) != hashtable[indx].end()){
        hashtable[indx].erase(searchKey(key));
        cout<<key<<" is deleted"<<endl;
        }
        else cout<<"Key is not found"<<endl;
    }
};
int main()
{
    Hashing h(10);
    h.add(1);
    h.add(2);
    h.searchKey(1);
    h.deleteKey(1);
    h.deleteKey(1);
   return 0;
}