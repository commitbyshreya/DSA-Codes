#include <iostream>
// #include <canio.h>
using namespace std;

int i =0;
struct student{
    int id;string name;float marks;
}s[25];
void insert(){
    system("clear");
    cout<<"** INSERT RECORD **"<<"\n"<<"\n";
    cout<<"Enter student id: ";
    cin>>s[i].id;
    cout<<"Enter student name: ";
    cin>>s[i].name;
    cout<<"Enter student marks: ";
    cin>>s[i].marks;
    i++;
    cout<<"\n\n*** INSERTED RECORD SUCCESSFULLY ***"<<"\n"<<"\n";
}
void search(){
    system("clear");
    cout<<"\n\n*** SEARCH RECORDS"<<"\n\n";
    if(i==0){
        cout<<"NO RECORD FOUND";
    }
    else{
        cout<<"Enter students id: ";
        int id,found=0; cin>>id;
        for(int a=0;a<i;a++){
            if(id==s[a].id){
                cout<<"Students name: "<<s[a].name<<endl;
                cout<<"Students marks: "<<s[a].marks;
                found++;
            }
        }
        if(found==0){
            cout<<"\n\n Student id not found!!"<<"\n\n";
        }
    }
}
int main()
{
    p: 
    system("clear");
    int num; 
    cout<<"\n\n **** STUDENT MANAGEMENT SYSTEM ****"<<"\n"<<"\n";
    cout<<"1. Insert Record"<<"\n"<<"\n";
    cout<<"2. Search Record"<<"\n"<<"\n";
    cout<<"3. Update Record"<<"\n"<<"\n";
    cout<<"4. Delete Record"<<"\n"<<"\n";
    cout<<"5. Show Record"<<"\n"<<"\n";
    cout<<"6. Exit"<<"\n"<<"\n";
    cout<<"ENTER YOUR CHOICE -> ";
    cin>>num;
    
    switch(num){
        case 1: 
            insert();
            break;
        case 2: 
            search();
            break;
        case 3: 
            break;
        case 4: 
            break;
        case 5: 
            break;
        case 6: 
            exit(0);
        default:
            cout<<"INVALID CHOICE!"<<"\n"<<"\n";
    }
    getchar();
    goto p;

   return 0;
}