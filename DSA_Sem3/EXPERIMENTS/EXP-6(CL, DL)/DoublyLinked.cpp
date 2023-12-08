/* DOUBLY LINKED LIST
  1. Algorithmot insert a new node at the beginning
  2. Algorithm to insert a new node at the end
  3. Algorithm to insert a new node after a given node
  4. Algorithm to insert a new node before a given node
  5. Algorithm to delete the first node
  6. Algorithm to delete the last node
  7. Alsorithmot delete anode after agvien node (##error)
  8. Algorithm to delete a node before a given node (##error)  */
#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val  = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int data){
        /* Algo to insert at the beginning
        1. If AVAIL = NULL
             write OVERFLOW, go to step 9.
        2. SET NEWNODE = AVAIL
        3. SET AVAIL = AVAIL->NEXT
        4. SET NEWNODE->DATA = VAL
        5. SET START->PREV = NEWNODE
        6. NEWNODE->NEXT = START
        7. SET NEWNODE->PREV = NULL
        8. SET START = NEWNODE. 9.EXIT */

        //check if list is empty, so head and tail will point to the same node 
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        head->prev = newNode;
        newNode->next = head;
        newNode->prev = NULL;
        head = newNode;

    }
    void insertAtEnd(int data){
        /* Algo to insert element at the End
        1. if AVAIL = NULL
            write OVERFLOW, go to step 11
        2. SET NEWNODE = AVAIL
        3. SET AVAIL = AVAIL->NEXT
        4. SET NEWNODE->DATA = VAL
        5. SET NEWNODE->NEXT = NULL
        6. SET TEMP = START
        7 Repeat setp 8 until TEMP != NULL
        8. SET TEMP = TEMP->NEXT [EXIT LOOP]
        9. SET TEMP->NEXT = NEWNODE
        10.SET NEWNODE->PREV = TEMP ,  11. EXIT   */

        //check if list is empty, so head and tail will point to the same node 
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;
        tail = newNode;
    }
    // void insertBeforeNode(int data, int nodeData){
    //     Node* newNode = new Node(data);
    //     Node* temp = head;
    //     while(temp!=NULL){
    //         if(temp->val == nodeData){
    //             newNode->next = temp;
    //             newNode->prev = temp->prev;
    //             temp->prev->next = newNode;
    //             temp->prev = newNode;
    //         }else{
    //             temp = temp->next;
    //         }
    //     }
    //     cout<<"Node not found";
    // }
    void insertAtPosition(int data, int pos){
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        int curr_pos = 0;
        Node* temp = head;
        while(curr_pos != pos-1){
            temp = temp->next;
            curr_pos++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode;
    }
    void deleteAtHead(){
        /* Algo to delete element at begining 
        1. if START = NULL
           write Underflow, go to step 6
        2. SET TEMP = START
        3. SET START = START->NEXT
        4. SET HEAD->PREV = NULL
        5. FREE TEMP   6.EXIT   */
        if(head == NULL){
            cout<<"Underflow"<<endl; return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        
    }
    void deleteAtEnd(){
        /* Algo to delete element at end
        1. if START = NULL
           write Underflow, go to step 7
        2. SET TEMP = START
        3. Repeat step 4 until TEMP->NEXT != NULL
        4. TEMP = TEMP->NEXT [EXIT LOOP]
        5. TEMP->PREV->NEXT = NULL
        6. FREE TEMP  7.EXIT                    */
        if(head == NULL){
            cout<<"Underflow"<<endl; return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    void deteleAfterNode(int data)
    //### FUNCTION GIVING ERROR ###
    {
        /* Algo to delete After given node
        1.  1. if START = NULL
           write Underflow, go to step 8
        2. SET TEMP = START
        3. Repeat step 4 until TEMP->DATA != VAL
        4. TEMP = TEMP->NEXT
        5. SET PTR = TEMP->NEXT
        6. SET PTR->NEXT->PREV = TEMP
        7. SET TEMP->NEXT = PTR->NEXT   8.EXIT */
        if(head == NULL){
            cout<<"Underflow"<<endl; return;
        }
        Node* temp = head;
        while(temp->val!=data){
            temp = temp->next;
        }
      
        Node* posttemp = temp->next;
        temp->next = posttemp->next;
        posttemp->next->prev = temp;
        free(posttemp);
    }
    void deleteBeforNode(int data){
         //### FUNCTION GIVING ERROR ###
        /* Algo to delete before given node
        */
        if(head == NULL){
            cout<<"Underflow"<<endl; return;
        }
        Node* temp = head;
        while(temp->val!=data){
            temp = temp->next;
        }
       Node* pretemp = temp->prev;
       pretemp->prev->next = pretemp->next;
       temp->prev = pretemp->prev;
       free(pretemp);
      

    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }cout<<endl;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtHead(3);
    dl.insertAtHead(4);
//dl.insertBeforeNode(69,2);
   // dl.deleteBeforNode(3);
    dl.display();
    // dl.deleteAtEnd();
    // dl.deleteAtHead();
    // dl.display();

    

   return 0;
}