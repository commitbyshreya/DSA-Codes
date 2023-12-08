/* EXPERIMENT 3
Implementation of Basic operations on stack for the assigned application using
Array and Linked List- Create, Insert, Delete, Peek. 
**** USING LINKED-LIST ****
*/


#include <iostream>
using namespace std;

class Node{
 public:
 int data;
 Node* next;
 Node(int d){
    this->data = d;
    this->next = NULL;
 }

};
class Stacks{
    public:
    Node* head;
    int capacity;
    int cur_size;
    Stacks(int c){
        this->capacity = c;
        head = NULL;
        cur_size = 0;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->cur_size == this->capacity;
    }
    void push(int data){
        if(this->cur_size == this->capacity){
            cout<<"Overflow\n";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        cur_size++;
    }
    int pop(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        /* 1.create a new node pointing to the curent head ka next
           2. now make the current head next null to break the link,  
           3. create node(nodeToremove) that stores the node that is to be deleted and lost the link
           4.create int result to store nodetoremove ka data.
           5. now delete that nodeToremove
           6. so now new node is the new head, and return result.
        */
        Node* new_node = this->head->next;
        this->head->next = NULL;
        Node* nodeToremove = this->head;
        int result = nodeToremove->data;
        delete nodeToremove;
        this->head = new_node;
        return result;

    }
    int size(){
        return this->cur_size;
    }
    int peek(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }
    void display(){
       if(this->head == NULL){
            cout<<"Underflow\n";
            
        }
        while(this->head != NULL){
            cout<<this->head->data<<" <- ";
            this->head = this->head->next;
        }
        
    }

};
int main()
{
    Stacks st(2);
    st.push(1);
    st.push(2);
    //st.pop();
    cout<<st.size()<<endl;
    cout<<st.peek()<<endl;
    st.display();

   return 0;
}


// #include <iostream>
// using namespace std;

// class Node{
//    public:
//    Node* next;
//    int val;
//    Node(int val){
//       this->val = val;
//       next = NULL;
//    }
// };
// class Stacks{
//    public:
//    Node* head;
//    int capacity;
//    int curr_capacity;
//    Stacks(int capacity){
//       this->capacity = capacity;
//       head = NULL;
//       curr_capacity = 0;
//    }

//    void insert(int val){
//    Node* newnode = new Node(val);
//    if(curr_capacity == capacity){
//       cout<<"Overflow";
//    }else{
//       newnode->next = head;
//       head = newnode;
//       curr_capacity++;
//    }
// }
// void deleteNode(){
//    if(curr_capacity==0){
//       cout<<"Underflow";
//    }
//    else{
//       Node* deleteN = this->head;
//       this->head = this->head->next;
//       free(deleteN);
//    }
// }
// void peek(){
//    cout<<this->head->val;
// }
// void display(){
//    if(curr_capacity==0){
//       cout<<"Underflow";
//    }
//    Node* temp = head;
//    while(temp!=NULL){
//       cout<<temp->val<<" -> ";
//       temp = temp->next;
//    }
//    cout<<"NULL" << endl;
// }
// };


// int main()
// {
//    Stacks st(3);
//    st.insert(2);
//    st.insert(4);
//    st.insert(1);
//    st.deleteNode();
//    st.display();
//    st.peek();
   
//    return 0;
// }