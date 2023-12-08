/* 1. Algorithm ot insert anew node at the beginning
   2. Algorithm ot insert a new node at the end
   3. Algorithm to delete the first node
   4. Algorithm to delete the last node
   */

#include <iostream>
using namespace std;

class Node{
    public:
    Node* next;
    Node* prev;
    int val;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;

    }
};
class CircularLinkedList {
    public:
    Node* head;
    CircularLinkedList(){
        head = NULL;
    }
    void insertAtHead(int data){
        /* Algo to insert node at the begining 
        1. if AVAIL= NULL
           write OVERFLOW, go to step 13
        2. SET NEWNODE = AVAIL
        3. SET AVAIL = AVAIL->NEXT
        4. SET NEWNODE->DATA = VAL
        5. SET TAIL = HEAD
        6. repeat step 7 until TAIL->NEXT != HEAD
        7. TAIL = TAIL->NEXT [END LOOP]
        8. TAIL->NEXT = NEWNODE
        9. NEWNODE->NEXT = HEAD
        10. NEWNODE->PREV = TAIL
        11. SET HEAD->PREV = NEWNODE
        12. HEAD = NEWNODE   13.EXIT */
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = head;
        newNode->prev = tail;
        head->prev = newNode;
        head = newNode;

    }
    void insetAtEnd(int data){
        /* Algo to insert at end
        1. if AVAIL= NULL
           write OVERFLOW, go to step 13
        2. SET NEWNODE = AVAIL
        3. SET AVAIL = AVAIL->NEXT
        4. SET NEWNODE->DATA = VAL
        5. SET TAIL = HEAD
        6. repeat step 7 until TAIL->NEXT != HEAD
        7. TAIL = TAIL->NEXT [END LOOP]
        8. SET NEWNODE->NEXT = HEAD
        9. SET NEWNODE->PREV = TAIL;
        10. SET HEAD->PREV = NEWNODE
        11. SET TAIL->NEXT = NEWNODE   12. EXIT.
        */
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail =  tail->next;
        }
        newNode->prev = tail;
        newNode->next = head;
        tail->next = newNode;
        head->prev = newNode;
    }
    void deleteAtHead(){
        /* Algo to delete at head
        1. if HEAD = NULL
            write Underflow , go to step 9
        2. SET TAIL = HEAD
        3. Repeat step 4 until TAIL->NEXT != head
           SET TAIL = TAIL->NEXT
        4. SET DELNODE = HEAD
        5. SET TAIL->NEXT = HEAD->PREV
        6. HEAD->NEXT->PREV = HEAD->PREV
        7. SET HEAD = HEAD->NEXT
        8. FREE DELNODE     9. EXIT */
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        Node* nodeToremove = head;
        tail->next = head->next;
        head->next->prev = head->prev;
        head = head->next;
        free(nodeToremove);
    }
    void deleteAtEnd(){
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
      //  Node* nodeToremove = tail;
        tail->prev->next = tail->next; //link tail's prev node with head
        head->prev = tail->prev; // head's prev linked to tail's prev node
        free(tail);

    }
    void display(){
        Node* temp = head;
        do{
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        while(temp != head);
        cout<<endl;
    }
};
int main()
{
    CircularLinkedList cl;
    cl.insertAtHead(1);
    cl.insertAtHead(2);
    cl.insetAtEnd(99);
    cl.display();
    cl.deleteAtHead();
    cl.insetAtEnd(69);
    cl.display();
    // cl.deleteAtEnd();
    // cl.display();
   return 0;
}