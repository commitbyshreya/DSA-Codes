/* Implementation of Basic operations on queue for the assigned application using
Array and Linked List- Create, Insert, Delete, Destroy
**USING ARRAY**
*/

#include <iostream>
#include <vector>
using namespace std;

class Queues{
    int front, back;
    vector<int> v;
    public:
    Queues(){
        this->back = -1;
        this->front = -1;
    }
    void enqueue(int data){
        /* check if the array is empty
           if true then adding a new ele will increment back as well as front */
        if((this->back == -1) && (this->front==-1)){
            this->v.push_back(data);
            this->front++; this->back++;
        }
        // if ele exists in array just increase back pointer 
        else{
            this->v.push_back(data);
            this->back++;
        }
     
    }
    void enqueueCircular(int data){
        if(back == -1 && front == -1){
            front++; back++;

        }else{
            back++;
        }
        arr[back] = data;
    }
     void dequeue()
{
    if(front==-1){
        cout<<"underflow";
    }else if(front== 0 and rear == 0){
        front = rear = -1;
    }
    else{
        front = (front + 1) % maxSize;
    }
}    void dequeue(){
        //check if only one ele is there in array
        // if true then after dequeue front and back will be set to -1
        if(this->back == this->front){
            this->back = -1; 
            this->front = -1;
        }
        // if more then one elemnts exits the only the front will increment 
        // ** Note - here the elements will not get deleted only front moves forward, this leads to memory wastage unlike linked list.
        else{
            this->front++;
        }
    }
    int frontEle(){
        if (this->front == -1) return -1;
        return this->v[this->front];
    }
    bool isEmpty(){
        return this->front == -1;
    }
   

};
int main()
{
    Queues q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
   cout<<q.frontEle()<<endl;
    while(!q.isEmpty()){
        cout<<q.frontEle()<<" ";
        q.dequeue();
    }
   return 0;
}