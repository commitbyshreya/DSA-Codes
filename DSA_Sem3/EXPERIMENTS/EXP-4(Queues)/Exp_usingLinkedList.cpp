/* Implementation of Basic operations on queue for the assigned application using
Array and Linked List- Create, Insert, Delete, Destroy
**USING LINKED_LIST**
*/


#include <iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;
    Node(int val){
       this->data = val;
       this->next = NULL;
    }
};
class Queues{
    Node* head;
    Node* tail;
    int curr_size;
    public:
  
    Queues(){
        
        this->head = NULL; 
        this->tail = NULL;
        this->curr_size = 0;
    }
    void push(int data){
        Node* new_node = new Node(data);
       
        //check if it it the first node to be added in the linked list
        //cz for the first node the head and the tail willpoint at the same node.
        if(this->head ==  NULL){
            this->head = this->tail = new_node;
            this->head->next = this->tail->next = NULL;
        }
        else{
            this->tail->next = new_node;
            this->tail  = new_node;
            this->tail->next = NULL;
        }
        this->curr_size++;
        
    }
    void pop(){
       if(head==NULL){
            cout<<"Underflow";
            return;
        }
        Node* temp = head;
        head = head->next;
        free(temp);
        curr_size--;
        
    }
    void queueInCircular(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
    }
    int size(){
        return this->curr_size;
    }
    int topELement(){
        if(this->head == NULL) return -1;
        return this->head->data;
    }
  
    bool isEmpty(){
        return this->head == NULL;
    }
    void display(){
    if(this->head==NULL){
          cout<<"underflow\n";
        }
       while(!(isEmpty())){
        cout<<this->head->data<<" -> ";
        this->head = this->head->next;
       }
       cout<<"NULL "<<endl;
    }

};
int main()
{
    Queues q;
    q.push(1);
    q.push(2);
    //q.push(3);
   // q.display();
    cout<<"the top element: "<<q.topELement()<<endl;
    cout<<"size: "<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"size: "<<q.size()<<endl;
    q.display();

   return 0;
}