#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

stack<char> s; 
int pda = 0;


void state2(){
    if(!s.empty() && s.top()=='$'){
        s.pop();
        pda = 2;
    }else{
        pda = -1;
    }
}



void state0(char str){
    if(str == 'a'){
        s.push('a');
        s.push('a');
        cout<<"\nGoing to state 0";
        pda = 0;
    }else if(str == 'b'){
        if(!s.empty() && s.top()=='a'){
            s.pop();
            cout<<"\nGoing to state 1";
            pda = 1;
        }else{
            pda = -1;

        }
    }
}
void state1(char str){
    if(str == 'b'){
        if(!s.empty() && s.top()=='a'){
            s.pop();
            cout<<"Going to state 1\n";
            pda = 1;
        }else{
            state2();
        }
    }
}
int isAccepted(char str[]){
    int n = strlen(str);

    for(int i = 0;i<=n;i++){
        if(pda == 0){
            state0(str[i]);
        }else if(pda == 1){
            state1(str[i]);
        }else{
            return 0;
        }
    }
    if(pda == 2){
        return 1;
    }else return 0;
}

int main(){

    s.push('$');
    char str[] = "aabbb";
    if(isAccepted(str)){
        cout<<"Accepted";
    }else{
        cout<<"Rejected";
    }
    return 0;
}
