/* EXPERIMENT 3
Implementation of Basic operations on stack for the assigned application using
Array and Linked List- Create, Insert, Delete, Peek. 
**** USING ARRAY ****
*/

#include <iostream>
using namespace std;

class Stacks{
    int capacity;
    int* arr;
    int top;
    public:
  
    Stacks(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;

    }
    void push(int data){
         /* Algo to pop element 
        1. if TOP = MAX-1
           write Overflow , go to step 4
        2. SET TOP = TOP + 1;
        3. SET STACK[TOP] = VAL  4. EXIT*/
        if(this->top==this->capacity-1){
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop(int data){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        this->top--;
      
    }
    int topElement(){
         if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        return this->top == -1;

    }
    bool isFull(){
        return this->top == this->capacity -1;
    }
    int size(){
        return this->top + 1;
    }
};
int main()
{
    Stacks st(5);
  
    cout<<st.topElement()<<endl;
    cout<<st.size()<<endl;
    st.pop(1); st.pop(2); st.pop(3);
    st.pop(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
 
    return 0;
}




// #include <iostream>
// using namespace std;

// class Stacks{
//    public:
//    int capacity; 
//    int* arr;
//    int top;
//    Stacks(int capacity){
//       this->capacity = capacity;
//       arr = new int[capacity];
//       top = -1;
//    }

//    void push(int data){
//       if(top == capacity-1){
//          cout<<"Overflow"; return;
//       }
//       top++;
//       this->arr[top]  = data;
//    }
//    void pop(){
//       if(top == -1){
//          cout<<"underflow"; 
//          return;
//       }
//       top--;
//    }
//    int peek(){
//        if(top == -1){
//          cout<<"underflow"; 
//       }
//       else{ return arr[top];}
//    }
//    int size(){
//       if(top == -1){
//          cout<<"underflow";
//       }
//       else{ return top+1;}
//    }

// };

// int main()
// {
//    Stacks st(3);
//    // st.push(1);
//    // st.push(2);
//    // st.push(3);
//    cout<<st.peek()<<endl;
//    cout<<st.size();
//    return 0;
// }