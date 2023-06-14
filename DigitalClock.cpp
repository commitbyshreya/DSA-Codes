#include <iostream>
#include <stdlib.h>
#include <curses.h>

using namespace std;
int main()
{
    int h=0,sec=0,min=0;
    while(true){
        system("clear");
          cout<<h<<" : "<<min<<" : "<<sec;
          sec++;
        if(sec==60){
            min++;
            sec=0;
            if(min==60){
                h++;
                min=0;
                if(h==60){
                    h=0;
                }
            }
        }
    }
   return 0;
}