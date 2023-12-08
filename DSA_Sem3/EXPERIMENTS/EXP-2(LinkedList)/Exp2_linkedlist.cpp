/* EXPERIMENT - 2 
Q2 Implementation of different operations on Linked List – creation, insertion,
deletion, traversal, searching an element */

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int val)
{
    /* 1.create new node
       2.new_node->next = current head
       3.head = new_node*/
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node *&head, int val)
{
    /*  1.create a new node
        2. create temp and point to head
        3. temp  temp->next until temp->next != NULL
        4. if true - temp->next = new_node */

    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node *&head, int val, int pos)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    while (current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    // temp is pointing to the pos-1th node
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertBeforeNode(Node* &head, int val, int nodeVal){
   Node* newNode = new Node(val);
  
   if(head==NULL){
   newNode->next = head;
   head = newNode;
   }
   Node* temp = head;
   Node* prev = temp;
   while(temp->val != nodeVal){
      prev = temp;
      temp = temp->next;
   }
   newNode->next = temp;
   prev->next = newNode;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node *&head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deleteAtPosition(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }
    Node *prev = head;
    int curr_pos = 0;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    Node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}
void deleteAfterNode(Node* head, int val){
   if(head==NULL){
      deleteAtHead(head); return;
   }
   Node* temp = head;
   Node* prev = temp;

   while(prev->val != val){
      prev = temp;
      temp = temp->next;
  
    }
    Node* deleteN = temp;
   prev->next = temp->next;
   free(deleteN);
  

}
bool searchElement(Node *&head, int data)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->val == data)
        {
            return cout << "node "<<data<<" found" << endl;
        }
        else
        {
            temp = temp->next;
        }
    }
    return cout << "node "<<data<<" not found" << endl;
}

void display(Node *head)
{
    /*  1.create temp pointer, point it at 1st head
        2. until temp->next != NULL keep traversing
        3. for traversing temp = temp->next  */
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout<<count<<endl;
}

int main()
{
    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    /* 1.create head pointer and initially make it null */
    Node *head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 0);
    display(head);
    insertAtTail(head, 4);
    display(head);
    insertAtPosition(head, 69, 1);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head, 1);
    display(head);
    searchElement(head, 69);
    searchElement(head, 22);

    return 0;
}